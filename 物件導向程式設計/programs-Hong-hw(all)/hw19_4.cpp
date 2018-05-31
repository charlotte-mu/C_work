// hw19_4,
#include <iostream>
#include <cstdlib>
bool is_prime(int);
using namespace std;
int main(void)
{
   int i;
   cout << "input a number:";
   cin >> i;
   try
   {
      if(i<0)
         throw "argument out of bound";
      else
      {
         if(is_prime(i))
            cout << i << " is a prime." << endl;
         else
           cout << i << " is not a prime." << endl;
      }
   }
   catch(const char *str)
   {
      cout << "捕捉到" << str << "例外..." << endl;
   }

   system("pause");
   return 0;
}

bool is_prime(int a)
{
    int i,j=0;
    for(i=1;i<=a;i++)
    {
       if(a%i==0)
         j=j+1;
    }
    if(j>3)
       return false;
    else
       return true;
}

/* output--------------------------------
input a number:-5
捕捉到argument out of bound例外...
---------------------------------------*/
