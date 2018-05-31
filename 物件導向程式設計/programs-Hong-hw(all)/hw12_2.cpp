// hw12_2,
#include <iostream>
#include <cstdlib>
using namespace std;
class Crectangle
{
   public:                //沒宣告公有變數,無法在其他地方使用
      int width;
      int height;
};                        //少了類別結束符號 ;

int main(void)
{
   Crectangle rect1;      //和類別的宣告變數名稱要一致
   rect1.width=15;
   rect1.height=10;       //物件宣告名稱要一致
   cout <<"面積為 "<<rect1.height*rect1.width<< endl;

   system("PAUSE");
   return 0;
}

/* output------
面積為 150
-------------*/
