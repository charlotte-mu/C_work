// hw7_10,
#include <iostream>
#include <cstdlib>
using namespace std;
int power(int,int);
double power(double,int);
int main(void)
{  
   cout << "power(5,3)=" << power(5,3) << endl;
   cout << "power(2.5,2)=" << power(2.5,2) << endl;
   
   system("pause");
   return 0;
}

int power(int x,int n)
{
	int p=1;
	for(int i=0;i<n;i++)
	   p*=x;
    return p;
}

double power(double x,int n)
{
	double p=1.0;
	for(int i=0;i<n;i++)
	   p*=x;
    return p;
}

/* output------------
power(5,3)=125
power(2.5,2)=6.25
-------------------*/
