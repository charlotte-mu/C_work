// hw6_8,
#include <iostream>
#include <cstdlib>
using namespace std;
float power(float,int);
int main(void)
{
   float x=5.0f;
   int n=2;
   cout << "power(" << x << "," << n << ")=";
   cout << power(x,n) << endl;
  
   system("pause");
   return 0;
}

float power(float x,int n)
{
   float p=1.0f;
   cout.setf(ios::showpoint);
   for(int i=0;i<n;i++)
      p*=x;
   return p;
}

/* output------------
power(5,2)=25.0000
-------------------*/
