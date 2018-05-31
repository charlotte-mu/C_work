// hw5_16,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int i=2,n=200,sum=0;           
   while(i<=n)
   {
      sum+=i;
      i+=2;
   }
   cout << "2+4+...+" << n << "=" << sum << endl;

   system("pause");
   return 0;
}

/* output----------------
2+4+...+200=10100
-----------------------*/
