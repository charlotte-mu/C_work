// hw16_10,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa    // �w�qCaaa���O�A�b���������O
{
   public:
     int num1,num2;
     Caaa()
     {
         num1=1;
         num2=1;
     }
     Caaa(int a, int b)
     {
         num1=a;
         num2=b;
     }
     void show()
      {
         cout << "num1= " << num1;
         cout << ", num2= " << num2 << endl;
      }
};

class Cbbb : public Caaa  // �w�qCbbb���O�A�~�Ӧ�Caaa���O
{
};

int main(void)
{
   Caaa obj1;
   Caaa obj2(10,15);
   Cbbb obj3;
   obj1.show();
   obj2.show();
   obj3.show();
   
   system("pause");
   return 0;
}

/* output-------------------------------
num1= 1, num2= 1
num1= 10, num2= 15
num1= 1, num2= 1
--------------------------------------*/
