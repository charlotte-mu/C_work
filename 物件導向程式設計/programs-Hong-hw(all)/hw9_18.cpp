// hw9_18,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char a[80];
   cout << "�п�J�@�Ӧr��:";
   cin.getline(a,80);

   for(int i=0;i<strlen(a);i++)
      if (*(a+i)==' ')
         *(a+i)='*';
   cout << "�����᪺�r��=" << a << endl;
   
   system("pause");
   return 0;
}

/* output---------------------------------------
�п�J�@�Ӧr��:Out of sight, out of mind
�����᪺�r��=Out*of*sight,*out*of*mind
----------------------------------------------*/
