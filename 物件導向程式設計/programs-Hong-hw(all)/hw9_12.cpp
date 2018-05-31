// hw9_12,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a=5,b=3,*ptr1,*ptr2;
   ptr1=&a;
   ptr2=&b;
   *ptr1=*ptr1+*ptr2;
   cout <<"a=" << a << endl;
   
   system("pause");
   return 0;
}

/* output---
a=8
----------*/
