// hw15_4,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
   private:
      char id;
      int width,height;

   public:
      CWin(char i,int w,int h):id(i),width(w),height(h)
      {}
      int operator>(CWin &win);
      int operator>(const int &var);
      int area(void)
      {
         return width*height;
      }
};

int CWin::operator>(CWin &win)
{
   return(this->area()>win.area());
}

int CWin::operator>(const int &var)
{
   return(this->area()>var);
}

int operator>(const int &var,CWin &win)
{
   return(var>win.area());
}

int main(void)
{
   CWin win1('A',70,80);
   CWin win2('B',60,70);

   if(win1>win2)
      cout << "win1 is larger than win2" << endl;
   else
      cout << "win2 is larger than win1" << endl;

   if(win1>7000)
      cout << "win1 is larger than 7000" << endl;
   else
      cout << "win1 is smaller than 7000" << endl;

   if(4500>win2)
      cout << "win2 is smaller than 4500" << endl;
   else
      cout << "win2 is larger than 4500" << endl;

   system("pause");
   return 0;
}

/* output-------------------------------
win1 is larger than win2
win1 is smaller than 7000
win2 is smaller than 4500
--------------------------------------*/
