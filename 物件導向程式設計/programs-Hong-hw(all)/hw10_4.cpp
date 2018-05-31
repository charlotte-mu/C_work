// hw10_4,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,*a;
   a=new int[2];
   for(i=0;i<2;i++)
   {
      cout << "Input number" << i+1 << ":";
      cin  >> a[i];
   }

   for(i=0;i<2;i++)
      cout << "a[" << i << "]=" << a[i] << "\t";
   cout << endl;

   cout << a[0] << "*" << a[1] << "=" << a[0]*a[1] << endl;
   
   delete[] a;
   a=NULL;

   system("pause");
   return 0;
}

/* output-----------
Input number1:6
Input number2:14
a[0]=6  a[1]=14
6*14=84
------------------*/
