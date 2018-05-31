// hw8_24,
#include <iostream>
#include <cstdlib>
#include <string> 
using namespace std;
int main(void)
{
   string str1;
   int index=0;
   cout << "請輸入一個字串: ";
   getline(cin,str1);
   index=str1.find("the"); 
   if(index<0)
      cout << "the沒有出現在字串中" << endl;
   else
      cout << "字串中出現the的位置是" << index << endl;
   
   system("pause");
   return 0;
}

/* output------------------------------------------------
請輸入一個字串: While the grass grows the horse starves
字串中出現the的位置是6
-------------------------------------------------------*/
