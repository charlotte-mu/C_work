// hw5_26,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int month=7;  
   cout << "month=" << month << endl;
   switch(month)
   {
      case 1: cout << "一月" << endl;
            break;
      case 2: cout << "二月" << endl;
            break;
      case 3: cout << "三月" << endl;
            break;
      case 4: cout << "四月" << endl;
            break;
      case 5: cout << "五月" << endl;
            break;
      case 6: cout << "六月" << endl;
            break;
      case 7: cout << "七月" << endl;
            break; 
      case 8: cout << "八月" << endl;
            break;
      case 9: cout << "九月" << endl;
            break;
      case 10: cout << "十月" << endl;
            break;
      case 11: cout << "十一月" << endl;
            break;
      case 12: cout << "十二月" << endl;
            break;
      default:
            cout << "不存在" << endl;;
   }

   system("pause");
   return 0;
}

/* output------
month=7
七月
-------------*/
