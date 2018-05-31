// hw9_8,
#include <iostream>
#include <cstdlib>
using namespace std;
void sort(int *,int *,int *);
int main(void)
{
   int num1=8,num2=5,num3=16;
   cout << "排序前, ";
   cout << num1 << " " << num2 << " " << num3 << endl;
   sort(&num1,&num2,&num3);
   cout << "排序後, ";
   cout << num1 << " " << num2 << " " << num3 << endl;

   system("pause");
   return 0;
}
void sort(int *a, int *b, int *c)
{
   int temp;
   if(*a < *b)
   {
      temp=*a;
      *a=*b;
      *b=temp;
   }
   if(*a < *c)
   {
      temp=*a;
      *a=*c;
      *c=temp;
   }
   if(*b < *c)
   {
      temp=*b;
      *b=*c;
      *c=temp;
   }
   return;
}

/* output--------
排序前, 8 5 16
排序後, 16 8 5
---------------*/
