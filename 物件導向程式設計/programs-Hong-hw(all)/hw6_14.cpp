// hw6_14,
#include <iostream>
#include <cstdlib>
using namespace std;
inline double centigrade(double f)
{
   double c;
   c=(5*f-160)/9;
   return c;
}

int main(void)
{
   for(double f=-40;f<=20;f+=10)
   {
      cout << "�ؤ�" << f << "��=���";
      cout << centigrade(f) << "��" << endl;
   }
   system("pause");
   return 0;
}

/* output-----------------
�ؤ�-40��=���-40��
�ؤ�-30��=���-34.4444��
�ؤ�-20��=���-28.8889��
�ؤ�-10��=���-23.3333��
�ؤ�0��=���-17.7778��
�ؤ�10��=���-12.2222��
�ؤ�20��=���-6.66667��
------------------------*/
