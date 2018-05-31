// hw10_8b, 以指標的方式修改
#include <iostream>
#include <cstdlib>
using namespace std;
int *min(int *,int *);
int main(void)
{
   int a=32,b=59;
   int *ptr;
   cout << "a=" << a << ", b=" << b << endl;
   ptr=min(&a,&b);
   *ptr=100;
   cout << "a=" << a << ", b=" << b << endl;

   system("pause");
   return 0;
}

int *min(int *x,int *y)
{
   if(*x>*y)
      return y;
   else
      return x;
}

/* output------
a=32, b=59
a=100, b=59
-------------*/
