// hw7_20b,
#include <iostream>
#include <cstdlib>
#include "head_math.h"
using namespace std;
int main(void)
{
   double r;
   cout << "�п�J�b�|:";
   cin >> r;   
   cout << "��P��=" << PERIPHERY(r) << endl;
   cout << "�y��n=" << VOLUMN(r) << endl;
   
   system("pause");
   return 0;
}

/* output---------------
�п�J�b�|:2
��P��=12.5664
�y��n=33.5103
----------------------*/
