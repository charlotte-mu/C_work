// hw8_22,
#include <iostream>
#include <cstdlib>
#include <string> 
using namespace std;
int main(void)
{
   string str1,str2;   
   cout << "��J��1�Ӧr��: ";
   getline(cin,str1);   
   cout << "��J��2�Ӧr��: ";
   getline(cin,str2);     
   cout << "�r��1������=" << str1.length() << endl;
   cout << "�r��2������=" << str2.length() << endl;
   if (str1==str2)
      cout << "��Ӧr��ۦP" << endl;
   else
      cout << "��Ӧr�ꤣ�ۦP" << endl;   
   
   system("pause");
   return 0;
}

/* output---------------------------
��J��1�Ӧr��: Today is my day
��J��2�Ӧr��: Today is not my day
�r��1������=15
�r��2������=19
��Ӧr�ꤣ�ۦP
----------------------------------*/
