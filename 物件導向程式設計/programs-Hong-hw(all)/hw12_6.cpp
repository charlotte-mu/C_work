// hw12_6,
#include <iostream>
#include <cstdlib>
using namespace std;
class CTemp
{
   public:
      double CtoF(double c)
      {
         return c/0.37;
      }
};

int main(void)
{
  CTemp tmp;
  cout << "���37.2�� = �ؤ� " << tmp.CtoF(37.2);
  cout << "��" << endl;

  system("PAUSE");
  return 0;
}

/* output--------------------
���37.2�� = �ؤ� 100.541��
---------------------------*/
