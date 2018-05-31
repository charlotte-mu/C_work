// hw12_14,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
    private:
      char id;
      int width;
      int height;

   public:
      void set_data(char i,int w,int h)
      {
         id=i;
         width=w;
         height=h;
      }
      void show_member()
      {
         cout <<"Window " << id;
         cout << ": width= " << width;
         cout << ", height = " << height << endl;
      }
};

int main(void)
{
   CWin win1,win2;

   win1.set_data('A',50,40);
   win2.set_data('B',80,60);
   win1.show_member();
   win2.show_member();

   system("PAUSE");
   return 0;
}

/* output-------------------------
Window A: width= 50, height = 40
Window B: width= 80, height = 60
--------------------------------*/
