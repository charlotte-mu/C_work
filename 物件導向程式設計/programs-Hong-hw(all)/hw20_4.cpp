// hw20_4,
#include <iostream>
#include <cstdlib>

namespace name1   // �]�w�W�٪Ŷ�name1
{
   int var=5;      // �b�W�٪Ŷ�name1���ŧi�ܼ�var
}

int main(void)
{
   int var=10;    // �ŧi�ϰ��ܼ�var

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
