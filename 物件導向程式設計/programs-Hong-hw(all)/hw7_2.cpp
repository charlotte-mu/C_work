// hw7_2,
#include <iostream>
#include <cstdlib>
using namespace std;
void sort(int &,int &);
int main(void)
{     
   int a=6, b=10;
   cout << "排序前，a=" << a << ", b=" << b << endl;
   sort(a,b);
   cout << "排序後，a=" << a << ", b=" << b << endl;

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
排序前，a=6, b=10
排序前，a=10, b=6
-----------------*/
