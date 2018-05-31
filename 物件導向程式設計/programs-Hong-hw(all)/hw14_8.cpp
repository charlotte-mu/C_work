// hw14_8,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa
{
  private:
     int m,n;
  public:
     Caaa(int m1,int n1):m(m1),n(n1)
     {}
     Caaa(const Caaa &obj)
     {
        cout << "拷貝建構元被呼叫了" << endl;
        m=obj.m;
        n=obj.n;
     }
     void show()
     {
        cout << "m=" << m << ", n=" << n << endl;
     }
 };

 int main(void)
 {
   Caaa obj1(10,20);
   Caaa obj2=obj1;
   obj1.show();
   obj2.show();

   system("pause");
   return 0;
}

/* output--------------------------
拷貝建構元被呼叫了
m=10, n=20
m=10, n=20
請按任意鍵繼續 . . .
---------------------------------*/
