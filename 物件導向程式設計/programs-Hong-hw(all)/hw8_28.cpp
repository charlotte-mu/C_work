// hw8_28,
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
   int month;
   string a[4]={"Spring","Summer","Autumn","Winter"};
   cout << "��J���:";
   cin  >> month;
   if(2<month && month<6)
      cout << a[0] << endl;
   else if(5<month && month<9)
      cout << a[1] << endl;
   else if(8<month && month<12)
      cout << a[2] << endl;
   else if(month==12||0<month && month<3)
      cout << a[3] << endl;
   else
      cout << "��J���~" << endl;
         
   system("pause");
   return 0;
}

/* output-----
��J���:8
Summer
------------*/
