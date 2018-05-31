// hw7_12,
#include <iostream>
#include <cstdlib>
using namespace std;
int power(int x=1,int n=1);
int main(void)
{  
   cout << "power()=" << power() << endl; 
   cout << "power(5)=" << power(5) << endl;
   cout << "power(3,2)=" << power(3,2) << endl;
   
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

/* output------------
power()=1
power(5)=5
power(3,2)=9
-------------------*/
