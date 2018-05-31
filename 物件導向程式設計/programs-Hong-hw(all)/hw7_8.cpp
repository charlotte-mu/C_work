// hw7_8,
#include <iostream>
#include <cstdlib>
using namespace std;
void proverb(void);
void proverb(int);
int main(void)
{  
   cout << "©I¥sproverb()..." << endl;
   proverb();
   cout << endl << "©I¥sproverb(3)..." << endl;
   proverb(3);
   
   system("pause");
   return 0;
}

void proverb(void)
{
	proverb(1);
}

void proverb(int k)
{
	for(int i=1;i<=k;i++)
	   cout << "Two heads are better than one." << endl;
}

/* output------------------------
©I¥sproverb()...
Two heads are better than one.

©I¥sproverb(3)...
Two heads are better than one.
Two heads are better than one.
Two heads are better than one.
-------------------------------*/
