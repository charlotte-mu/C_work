// hw14_4,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa
{
   public:
     Caaa();
    ~Caaa();
};

Caaa::Caaa()    // �غc��
{
   cout << "constructor called"<< endl;
}

Caaa::~Caaa()   // �Ѻc��
{
   cout << "destructor called "<< endl;
   system("pause");
}

int main(void)
{
   Caaa obj;
   cout << "sizeof(obj)=" << sizeof(obj) << endl;
   
   system("pause");
   return 0;
}

/* output �bDev C++�PVisual C++�̽sĶ����ɪ����G ---
constructor called
sizeof(obj)=1
�Ы����N���~�� . . .
destructor called
�Ы����N���~�� . . .
------------------------------------------------*/

/* output �bC++Builder 6�̽sĶ����ɪ����G ----------
constructor called
sizeof(obj)=8
�Ы����N���~�� . . .
destructor called
�Ы����N���~�� . . .
------------------------------------------------*/
