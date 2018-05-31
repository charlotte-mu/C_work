// prog7_8, 引數的預設值
#include <iostream>
#include <cstdlib>
using namespace std;
double circle(double,double pi=3.14);    // 函數原型,第2個引數預設為3.14
int main(void)
{
   cout << "circle(2.0,3.14159)=" << circle(2.0,3.14159) << endl;
   cout << "circle(2.0)=" << circle(2.0) << endl; 
   system("pause");
   return 0;
}

double circle(double r, double pi)	     // circle()函數的定義，計算圓面積
{
	return (pi*r*r);
}
