// hw8_22,
#include <iostream>
#include <cstdlib>
#include <string> 
using namespace std;
int main(void)
{
   string str1,str2;   
   cout << "輸入第1個字串: ";
   getline(cin,str1);   
   cout << "輸入第2個字串: ";
   getline(cin,str2);     
   cout << "字串1的長度=" << str1.length() << endl;
   cout << "字串2的長度=" << str2.length() << endl;
   if (str1==str2)
      cout << "兩個字串相同" << endl;
   else
      cout << "兩個字串不相同" << endl;   
   
   system("pause");
   return 0;
}

/* output---------------------------
輸入第1個字串: Today is my day
輸入第2個字串: Today is not my day
字串1的長度=15
字串2的長度=19
兩個字串不相同
----------------------------------*/
