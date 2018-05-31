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
   cout << "輸入年份yyyy:";
   cin  >> date.year;
   cout << "輸入月份mm:";
   cin  >> date.month;
   cout << "輸入日期dd:";
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
輸入年份yyyy:2006
輸入月份mm:03
輸入日期dd:18
*****Output******
03/18/2006
--------------------------------------*/
