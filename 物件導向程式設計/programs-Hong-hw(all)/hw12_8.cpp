// hw12_8,
#include <iostream>
#include <cstdlib>
using namespace std;
class Calculator
{
      public:
      void add(int a,int b)
      {
         cout << "�G�Ƥ��M= " << a+b << endl;
      }
      void sub(int a,int b)
      {
         cout << "�G�Ƥ��t= " << a-b << endl;
      }
      void mul(int a,int b)
      {
         cout << "�G�Ƥ��n= " << a*b << endl;
      }
      void div(int a,int b)
      {
         cout << "�G�Ƥ���= " << (double)a/b << endl;
      }
};

int main(void)
{
   Calculator A;
   int a=3,b=6;
   cout << "a=" << a << ", b=" << b << endl;
   A.add(a,b);
   A.sub(a,b);
   A.mul(a,b);
   A.div(a,b);

  system("PAUSE");
  return 0;
}

/* output--------------------
a=3, b=6
�G�Ƥ��M= 9
�G�Ƥ��t= -3
�G�Ƥ��n= 18
�G�Ƥ���= 0.5
---------------------------*/
