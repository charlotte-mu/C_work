// hw4_24,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   char ch='A';
   short s=12;
   float f=12.4f;
   int i=15;
   double d=13.62; 
   
   cout << "s+(f/s)+(ch*i)=" << s+(f/s)+(ch*i) << endl;   
   cout << "ch+d/(s-i)*f=" << ch+d/(s-i)*f << endl;
   cout << "(s+d)/ch*(d+i)=" << (s+d)/ch*(d+i) << endl;   
   
   system("pause");
   return 0;
}

/* output----------------
s+(f/s)+(ch*i)=988.033
ch+d/(s-i)*f=8.704
(s+d)/ch*(d+i)=11.2807
-----------------------*/
