// hw15_2,
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
      int area(void)
      {
         return width*height;
      }
};

void operator>(CWin &win1,CWin &win2)
{
   if(win1.area()>win2.area())
      cout << "win1 is larger than win2" << endl;
   else
      cout << "win2 is larger than win1" << endl;
}

int main(void)
{
   CWin win1('A',70,80);
   CWin win2('B',60,90);

   operator>(win1,win2);

   system("pause");
   return 0;
}

/* output-------------------------------
win1 is larger than win2
--------------------------------------*/
