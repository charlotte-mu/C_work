// hw11_2,
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
struct mydate
{
   int year;
   int month;
   int day;
}date;
int main(void)
{
   cout << "��J�~��yyyy:";
   cin  >> date.year;
   cout << "��J���mm:";
   cin  >> date.month;
   cout << "��J���dd:";
   cin  >> date.day;
   cout << "*****Output******" << endl;
   cout << setfill('0');
   cout << setw(2) <<date.month << "/"
        << setw(2) << date.day << "/"
        << setw(4) <<date.year << endl;

   system("pause");
   return 0;
}

/* output-------------------------------
��J�~��yyyy:2006
��J���mm:03
��J���dd:18
*****Output******
03/18/2006
--------------------------------------*/
