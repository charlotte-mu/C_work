// hw13_6,
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
      friend CWin compare(CWin ,CWin);
      friend int area(CWin);
      friend char get_id(CWin);
};

CWin compare(CWin win1, CWin win2)
{
   if(area(win1) >= area(win2))
      return win1;
   else
      return win2;
}

int area(CWin win)
{
   return win.width*win.height;
}

char get_id(CWin win)
{
   return win.id;
}

int main(void)
{
   CWin win1('A',70,80);
   CWin win2('B',60,90);
   CWin win3=compare(win1,win2);
   cout << "window " <<get_id(win3)<< " is larger" << endl;

   system("pause");
   return 0;
}

/* output-------------------------------
window A is larger
--------------------------------------*/
