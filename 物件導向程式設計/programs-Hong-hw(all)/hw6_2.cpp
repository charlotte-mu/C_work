// hw6_2,
#include <iostream>
#include <cstdlib>
using namespace std;
void proverb(int);
int main(void)
{     
   proverb(3);   

   system("pause");
   return 0;
}

void proverb(int k)
{
   for(int i=1;i<=k;i++)
      cout << "Live and learn." << endl;
} 

/* output--------------------------------
Live and learn.
Live and learn.
Live and learn.
---------------------------------------*/
