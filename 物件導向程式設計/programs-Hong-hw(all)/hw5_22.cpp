// hw5_22,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i;   
   cout << "可被2與3整除，但不能被12整除的數有 "; 
   for(i=1;i<=100;i++)
   {
      if(!(i%2==0 && i%3==0 && i%12!=0))
         continue;
      cout << i << " "; 
   }
   cout << endl;
      
   system("pause");
   return 0;
}

/* output---------------------------------------------------
可被2與3整除，但不能被12整除的數有 6 18 30 42 54 66 78 90
----------------------------------------------------------*/
