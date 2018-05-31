// hw13_2,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin              // 定義視窗類別CWin
{
   private:
      char id;
      int width,height;

   public:
      CWin(char i,int w,int h)
      {
         id=i;
         width=w;
         height=h;
      }
      CWin()
      {
         cout<< "CWin()建構元被呼叫了" << endl;
      }
      void show_member(void)
      {
         cout << "Window "<< id << ": ";
         cout << "width=" << width << ", height= " << height << endl;
      }
};

int main(void)
{
   CWin win1('A',80,80);
   CWin win2;                // 去掉()即可
   win1.show_member();
   win2.show_member();       // 成員之值將會是記憶體內的殘值

   system("pause");
   return 0;
}

/* output-------------------------------
CWin()建構元被呼叫了
Window A: width=80, height= 80
Window : width=4007080, height= 4006960
--------------------------------------*/
