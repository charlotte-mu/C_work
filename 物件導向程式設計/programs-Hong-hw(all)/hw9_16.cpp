// hw9_16,
#include <iostream>
#include <cstdlib>
using namespace std;
void display(char *, int);
int main(void)
{
   char str[]="Out of sight, out of mind";
   cout << "字串內容為" << str << endl;
   cout << "從第14個字元起列印:";
   display(str,14);

   system("pause");
   return 0;
}
void display(char *ptr,int n)
{
   for(int i=n;i<strlen(ptr);i++)
      cout << *(ptr+i);
   cout << endl;
   return;
}

/* output---------------------------
字串內容為Out of sight, out of mind
從第14個字元起列印:out of mind
----------------------------------*/
