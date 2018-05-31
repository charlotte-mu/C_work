// hw7_16,
#include <iostream>
#include <cstdlib>
using namespace std;
#define SUM(X,Y) (X+Y)
int main(void)
{
   int a=10, b=5;
   double x=4.6, y=3.8;
   cout << "SUM(" << a << "," << b << ")=";
   cout << SUM(a,b) << endl; 
   cout << "SUM(" << x << "," << y << ")=";
   cout << SUM(x,y) << endl;    
   
   system("pause");
   return 0;
}

/* output------------
SUM(10,5)=15
SUM(4.6,3.8)=8.4
-------------------*/
