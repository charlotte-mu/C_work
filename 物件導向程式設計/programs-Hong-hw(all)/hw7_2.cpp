// hw7_2,
#include <iostream>
#include <cstdlib>
using namespace std;
void sort(int &,int &);
int main(void)
{     
   int a=6, b=10;
   cout << "�Ƨǫe�Aa=" << a << ", b=" << b << endl;
   sort(a,b);
   cout << "�Ƨǫ�Aa=" << a << ", b=" << b << endl;

   system("pause");
   return 0;
}

void sort(int &x,int &y)
{
   int temp;
   if(x<y)
   {
     temp=x;
     x=y;
     y=temp;
   }
} 

/* output----------
�Ƨǫe�Aa=6, b=10
�Ƨǫe�Aa=10, b=6
-----------------*/
