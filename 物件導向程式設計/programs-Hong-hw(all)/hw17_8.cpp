// hw17_8,
#include <iostream>
#include <cstdlib>
using namespace std;
class CMath
{
   public:

     void show()
     {
       cout << "ans=" << compute() << endl;
     }
     virtual int compute()=0;
};

class Cadd : public CMath
{
   public:
   int num1,num2;

   Cadd(int m,int n):num1(m),num2(n){}

   int compute()
   {
      return num1+num2;
   }
};

int main(void)
{
   Cadd a1(2,3);
   a1.show();

   system("pause");
   return 0;
}

/* output-----------------
ans=5
------------------------*/
