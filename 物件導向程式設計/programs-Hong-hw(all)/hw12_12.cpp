// hw12_12,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
   private:
      int width;
      int height;

   public:
      void show_area(void)
      {
         cout << "Area= " << width*height << endl;
      }
      int set_data(int w,int h)
      {
         if(w>0 && h>0)      //多了做資料判別的步驟
         {
            width=w;
            height=h;
            return 0;
         }
         else
         {
            cout << "Input Error..." << endl;
            return 1;
         }
      }
};

int main(void)
{
   CWin win1;
   int flag;

   flag=win1.set_data(5,12);

   if(flag)
      cout << "program terminated..." << endl;
   else
      win1.show_area();

   system("PAUSE");
   return 0;
}

/* output--------------------
Area= 60
---------------------------*/
