// hw16_12,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa    // �w�qCaaa���O�A�b���������O
{
   protected:
     int num;

   public:
     Caaa()
     {
        num=5;
     }
};

class Cbbb : public Caaa  // �w�qCbbb���O�A�~�Ӧ�Caaa���O
{
   public:
     void show()
     {
        cout << "num= " << num << endl;
     }
};

int main(void)
{
   Cbbb b;
   b.show();

   system("pause");
   return 0;
}

/* output-------------------------------
num= 5
--------------------------------------*/
