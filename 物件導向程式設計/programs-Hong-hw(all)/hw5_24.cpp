// hw5_24,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int num=0;
   while(true)
   {
      if(num%3==1 && num%5==3 && num%7==2)
         break;
      num++;
   }
   cout << "�̤֦�" << num << "���ߤl" << endl;

   system("pause");
   return 0;
}

/* output------
�̤֦�58���ߤl
-------------*/
