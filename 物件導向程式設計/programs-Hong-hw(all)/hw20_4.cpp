// hw20_4,
#include <iostream>
#include <cstdlib>

namespace name1   // 設定名稱空間name1
{
   int var=5;      // 在名稱空間name1內宣告變數var
}

int main(void)
{
   int var=10;    // 宣告區域變數var

   std::cout << "in name1, var= ";
   std::cout << name1::var << std::endl;
   std::cout << "var= " << var << std::endl;

   system("pause");
   return 0;
}

/* output-------------------------------
in name1, var= 5
var= 10
--------------------------------------*/
