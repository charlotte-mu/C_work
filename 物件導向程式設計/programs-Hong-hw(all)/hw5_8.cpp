// hw5_8,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int month=7;
   if(month>=3 && month<=5)
      cout << month << "��O�K�u" << endl;
   else if(month>=6 && month<=8)
      cout << month << "��O�L�u" << endl;
   else if(month>=9 && month<=11)
      cout << month << "��O��u" << endl;
   else if(month==1 || month==2 || month==12)
      cout << month << "��O�V�u" << endl;
   else
      cout << month << "������s�b" << endl;

   system("pause");
   return 0;
}

/* output----------------
7��O�L�u
-----------------------*/
