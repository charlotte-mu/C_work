// hw13_10,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
   private:
      char id;
      int width,height;

   public:
      void set_member(char i,int w,int h)
      {
         id=i;
         width=w;
         height=h;
      }
      int area(void)
      {
         return width*height;
      }

      static void average(CWin win[],int n)
      {
         float tol=0;
         for(int i=0;i<n;i++)
              tol=tol+win[i].area();
         cout << "面積平均值=" << tol/n << endl;
      }
};

int main(void)
{
   CWin win[3];

   win[0].set_member('A',60,70);
   win[1].set_member('B',40,60);
   win[2].set_member('C',80,50);

   CWin::average(win,3);

   system("pause");
   return 0;
}

/* output-------------------------------
面積平均值=3533.33
--------------------------------------*/
