// hw7_4,
#include <iostream>
#include <cstdlib>
using namespace std;
void setvalue(int &,int &);
int main(void)
{     
   int a=12, b=9;
   cout << "�]�ȫe�Aa=" << a << ", b=" << b << endl;   
   setvalue(a,b);
   cout << "�]�ȫ�Aa=" << a << ", b=" << b << endl;

   system("pause");
   return 0;
}

void setvalue(int &x,int &y)
{  
   if(x>y)
   {
      y=100;
      x=10;
   }
   else
   {       
      x=100;
      y=10;
   }
} 

/* output------------------
�]�ȫe�Aa=12, b=9
�]�ȫ�Aa=10, b=100
-------------------------*/
