// hw20_2, ¨Ï¥Înamespace
#include <iostream>
#include <cstdlib>
namespace name1
{
   int var=5;
}

namespace name2
{
   int var=10;
}

int main(void)
{
   std::cout << "in namespace name1: ";
   std::cout << name1::var << std::endl;
   std::cout << "in namespace name2: ";
   std::cout << name2::var << std::endl;

   std::system("pause");
   return 0;
}

/* output-------------------------------
in namespace name1: 5
in namespace name2: 10
--------------------------------------*/
