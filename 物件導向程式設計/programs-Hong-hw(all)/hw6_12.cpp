// hw6_12,
#include <iostream>
#include <cstdlib>
using namespace std;
double f(double);
double power(double,int);
int main(void)
{   
   cout << "f(x)=3x^3+2x-1" << endl;
   cout << "f(-3.2)=" << f(-3.2) << endl;
   cout << "f(-2.1)=" << f(-2.1) << endl;
   cout << "f(0)=" << f(0) << endl;
   cout << "f(2.1)=" << f(2.1) << endl;

   system("pause");
   return 0;
}

double f(double x)
{
   double sum=0.0f;
   sum=3*power(x,3)+2*x-1;
   return sum;
}

double power(double x,int n)
{
   double p=1.0f;
   for(int i=0;i<n;i++)
      p*=x;
   return p;
}

/* output------------
f(x)=3x^3+2x-1
f(-3.2)=-105.704
f(-2.1)=-32.983
f(0)=-1
f(2.1)=30.983
-------------------*/
