// hw6_24,
#include<iostream>
#include<cstdlib>
using namespace std;
int fact(int);
int main(void)
{
   int i=1,n=10,sum=0;     
   do{
      sum+=fact(i); 
      i++;
   }while(i<=n);  
   cout << "1!+2!+...+" << n << "!=" << sum << endl;

   system("pause");
   return 0;
}

int fact(int a)
{
   if(a>0)
      return (a*fact(a-1));
   else
      return 1;
}

/* output-------------------
1!+2!+...+10!=4037913
--------------------------*/
