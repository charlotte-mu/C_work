//hw20_10,
#include <iostream>
#include <cstdlib>
#define SIZE 15
using namespace std;
int main(void)
{
   #ifdef SIZE
      #if SIZE>20
         char str[SIZE]="Hello C++";
      #elif SIZE>=10 && SIZE<=19
          char str[SIZE]="Welcome";
      #else
         char *str="SIZE too small";
      #endif
   #else
      char *str="SIZE not defined";
   #endif

   cout << str << endl;

   system("pause");
   return 0;
}

/* output-------------------------------
Welcome
--------------------------------------*/
