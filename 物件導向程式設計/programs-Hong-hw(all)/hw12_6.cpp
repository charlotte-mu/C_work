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
  cout << "攝氏37.2度 = 華氏 " << tmp.CtoF(37.2);
  cout << "度" << endl;

  system("PAUSE");
  return 0;
}

/* output--------------------
攝氏37.2度 = 華氏 100.541度
---------------------------*/
