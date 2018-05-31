// hw9_18,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char a[80];
   cout << "請輸入一個字串:";
   cin.getline(a,80);

   for(int i=0;i<strlen(a);i++)
      if (*(a+i)==' ')
         *(a+i)='*';
   cout << "替換後的字串=" << a << endl;
   
   system("pause");
   return 0;
}

/* output---------------------------------------
請輸入一個字串:Out of sight, out of mind
替換後的字串=Out*of*sight,*out*of*mind
----------------------------------------------*/
