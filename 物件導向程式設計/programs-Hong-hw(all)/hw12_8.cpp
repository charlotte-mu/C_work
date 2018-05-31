// hw12_8,
#include <iostream>
#include <cstdlib>
using namespace std;
class Calculator
{
      public:
      void add(int a,int b)
      {
         cout << "计ぇ㎝= " << a+b << endl;
      }
      void sub(int a,int b)
      {
         cout << "计ぇ畉= " << a-b << endl;
      }
      void mul(int a,int b)
      {
         cout << "计ぇ縩= " << a*b << endl;
      }
      void div(int a,int b)
      {
         cout << "计ぇ坝= " << (double)a/b << endl;
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
计ぇ㎝= 9
计ぇ畉= -3
计ぇ縩= 18
计ぇ坝= 0.5
---------------------------*/
