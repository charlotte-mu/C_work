// hw7_20a,
#include <iostream>
#include <cstdlib>
#include "head_math.h"
using namespace std;
int main(void)
{
   double ubase,lbase,height;
   cout << "�п�J��Ϊ��W��:";
   cin >> ubase;
   cout << "�п�J��Ϊ��U��:";
   cin >> lbase;
   cout << "�п�J��Ϊ���:";
   cin >> height;
   cout << "��Χέ��n=" << TRAPEZOID(ubase,lbase,height) << endl;
      
   system("pause");
   return 0;
}

/* output---------------
�п�J��Ϊ��W��:6
�п�J��Ϊ��U��:10
�п�J��Ϊ���:5
��Χέ��n=40
----------------------*/
