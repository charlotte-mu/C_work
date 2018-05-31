// hw7_20a,
#include <iostream>
#include <cstdlib>
#include "head_math.h"
using namespace std;
int main(void)
{
   double ubase,lbase,height;
   cout << "請輸入梯形的上底:";
   cin >> ubase;
   cout << "請輸入梯形的下底:";
   cin >> lbase;
   cout << "請輸入梯形的高:";
   cin >> height;
   cout << "梯形形面積=" << TRAPEZOID(ubase,lbase,height) << endl;
      
   system("pause");
   return 0;
}

/* output---------------
請輸入梯形的上底:6
請輸入梯形的下底:10
請輸入梯形的高:5
梯形形面積=40
----------------------*/
