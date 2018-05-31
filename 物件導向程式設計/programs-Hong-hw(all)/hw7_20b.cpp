// hw7_20b,
#include <iostream>
#include <cstdlib>
#include "head_math.h"
using namespace std;
int main(void)
{
   double r;
   cout << "請輸入半徑:";
   cin >> r;   
   cout << "圓周長=" << PERIPHERY(r) << endl;
   cout << "球體積=" << VOLUMN(r) << endl;
   
   system("pause");
   return 0;
}

/* output---------------
請輸入半徑:2
圓周長=12.5664
球體積=33.5103
----------------------*/
