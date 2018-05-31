// hw5_8,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int month=7;
   if(month>=3 && month<=5)
      cout << month << "月是春季" << endl;
   else if(month>=6 && month<=8)
      cout << month << "月是夏季" << endl;
   else if(month>=9 && month<=11)
      cout << month << "月是秋季" << endl;
   else if(month==1 || month==2 || month==12)
      cout << month << "月是冬季" << endl;
   else
      cout << month << "月份不存在" << endl;

   system("pause");
   return 0;
}

/* output----------------
7月是夏季
-----------------------*/
