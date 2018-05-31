// hw5_12,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int i,sum=0;

   for(i=1;i<=100;i++)
      sum+=i*i*i;
   cout << "1~100之間整數的立方值總和為 " << sum << endl;

   system("pause");
   return 0;
}

/* output--------------------------------
1~100之間整數的立方值總和為 25502500
---------------------------------------*/
