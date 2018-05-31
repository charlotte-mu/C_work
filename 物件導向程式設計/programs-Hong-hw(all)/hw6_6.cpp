// hw6_6,
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
bool primeQ(int);
int main(void)
{     
   int n=13;
   if(primeQ(n))
	   cout << n << "是質數" << endl;
   else
	   cout << n << "不是質數" << endl;
   
   system("pause");
   return 0;
}

bool primeQ(int num)
{   
   for(int i=2;i<sqrt((double)num+1);i++)
      if(num%i==0)
         return false;
   return true;
} 

/* output-----
13是質數
------------*/
