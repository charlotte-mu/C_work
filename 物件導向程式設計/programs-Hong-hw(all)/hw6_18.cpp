// hw6_18,
#include <iostream>
#include <cstdlib>
using namespace std;
static int km;
double miles(void);
int main(void)
{ 
   for(km=10;km<=30;km+=5)
      cout << km << "公里=" << miles() << "英哩" << endl; 
 
   system("pause");
   return 0;
}

double miles(void)
{
   return (1/1.6*km);
}

/* output-----------------
10公里=6.25英哩
15公里=9.375英哩
20公里=12.5英哩
25公里=15.625英哩
30公里=18.75英哩
------------------------*/
