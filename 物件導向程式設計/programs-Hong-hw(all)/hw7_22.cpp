// hw7_22,
#include <iostream>
#include <cstdlib>
using namespace std;
double power(double,int);
int main(int argc, char *argv[])
{
   double x=atof(argv[1]);
   int n=atoi(argv[2]);
   cout << x << "^" << n << "=" << power(x,n) << endl;
   
   system("pause");
   return 0;
}

double power(double a,int b)
{
   if(b==0)
      return 1;
   else return (a*power(a,b-1));
}

/* output---------------
C:\C++>hw7_22 2 3
2^3=8
----------------------*/
