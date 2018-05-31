// hw15_6,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
   private:
      char id;
      int width,height;

   public:
      CWin(char i='D',int w=10,int h=10):id(i),width(w),height(h)
      {}
      CWin operator+(CWin &win);
      void show_member(void)
      {
         cout << "window "<< id << ": ";
         cout << "width=" << width << ", height=" << height << endl;
      }
};

CWin CWin:: operator+(CWin &win)
{
   int w,h;
   w=this->width > win.width ? this->width : win.width;
   h=this->height > win.height ?this->height:win.height;
   return CWin('D',w,h);
}

int main(void)
{
   CWin win1('A',70,80);
   CWin win2('B',60,90);
   CWin win3;
   win3=win1+win2;
   win3.show_member();

   system("pause");
   return 0;
}

/* output-------------------------------
window D: width=70, height=90
--------------------------------------*/
