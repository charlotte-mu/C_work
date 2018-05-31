// hw19_8,
#include <iostream>
#include <cstdlib>
using namespace std;
template <class T>                        // �w�q���O�˪O
class CWin
{
   protected:
   T width, height;                       // �ŧi��Ʀ���

   public:
   CWin(T w,T h):width(w),height(h){};    // �غc��

   void show(void)                        // show()���
   {
      cout << "width=" << width << ", ";
      cout << "height=" << height << endl;
   }
};

int main(void)
{
   CWin <int> win1(50,60);                // �إ�win1����
   CWin <double> win2(50.25,60.74);       // �إ�win2����

   cout << "win1 object: ";
   win1.show();
   cout << "win2 object: ";
   win2.show();

   system("pause");
   return 0;
}

/* output--------------------------------
win1 object: width=50, height=60
win2 object: width=50.25, height=60.74
---------------------------------------*/
