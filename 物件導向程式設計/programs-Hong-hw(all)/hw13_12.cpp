// hw13_12,
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

      CWin *compare(CWin *win)
      {
         if(this->area() > win->area())
            return this;
         else
            return win ;
     }
     int area(void)
     {
        return width*height;
     }
     char get_id(void)
     {
        return id;
     }
};

int main(void)
{
   CWin win1('A',70,80);
   CWin win2('B',90,90);
   CWin *p2=&win2;
   CWin *ptr;
   ptr=win1.compare(p2);
   cout << "window " << ptr->get_id() << " is larger" << endl;

   system("pause");
   return 0;
}

/* output-------------------------------
window B is larger
--------------------------------------*/
