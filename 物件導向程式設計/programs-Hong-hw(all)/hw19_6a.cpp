// hw19_6a,
#include <iostream>
#include <cstdlib>
using namespace std;
int times(int ,int);
short times(short,short);
float times(float,float);
double times(double,double);
int main(void )
{
   cout << "times(3,4)=" << times(3,4) << endl;
   cout << "times(3.6,4.6)=" << times(3.6,4.6) << endl;
   cout << "times(3.1154,3.1169)=" << times(3.1154,3.1169) << endl;
   cout << "times(3.3,4.4)=" << times(3.3,4.4) << endl;

   system("pause");
   return 0;
}
int times(int a,int b)
{
   int sum;
   sum=a*b;
   return sum;
}
short times(short a,short b)
{
   short sum;
   sum=a*b;
   return sum;
}
float times(float a,float b)
{
   float sum;
   sum=a*b;
   return sum;
}
double times(double a,double b)
{
   double sum;
   sum=a*b;
   return sum;
}

/* output--------------------------------
times(3,4)=12
times(3.6,4.6)=16.56
times(3.1154,3.1169)=9.71039
times(3.3,4.4)=14.52
---------------------------------------*/
