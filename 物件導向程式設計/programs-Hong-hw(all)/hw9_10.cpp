// hw9_10,
#include <iostream>
#include <cstdlib>
using namespace std;
void liter(double *);
int main(void)
{
   double a,*ptr;
   cout << "請輸入欲轉換的公升數:";
   cin  >> a;
   ptr=&a;
   cout << a <<"公升=";
   liter(ptr);
   cout << a << "加侖" << endl;

   system("pause");
   return 0;
}
void liter( double *ptr)
{
   *ptr=*ptr*0.264;
   return;
}

/* output---------------
請輸入欲轉換的公升數:10
10公升=2.64加侖
----------------------*/
