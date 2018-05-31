//hw11_12,
#include <iostream>
#include <cstdlib>
using namespace std;
enum month	// 定義列舉型態
{	January,February,March,
    April,May,June } six;
int main(void)
{
   for(six=January;six<=June;six=static_cast<month>(six+1))
   {
      cout << "six(" << six << ")=";
      switch(six)
      {
         case 0:	cout << "January" << endl;
              break;
         case 1:	cout << "February" << endl;
              break;
         case 2:	cout << "March" << endl;
              break;
         case 3:	cout << "April" << endl;
              break;
         case 4:	cout << "May" << endl;
              break;
         case 5:	cout << "June" << endl;
      }
   }

   system("pause");
   return 0;
}

/* output---------------------------
six(0)=January
six(1)=February
six(2)=March
six(3)=April
six(4)=May
six(5)=June
----------------------------------*/
