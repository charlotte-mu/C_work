// hw5_20,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int length=3500,day=0;

   while(length>=3)
   {
      length/=2;
      day++;
      if(length<3)
         break;
   }      
   cout << "It spent " << day << " days" << endl;

   system("pause");
   return 0;
}

/* output----------------
It spent 11 days
-----------------------*/
