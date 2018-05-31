// hw8_16,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char a[27]={'\0'};   
   for(int i=0;i<26;i++)
     a[i]=char(i+65);   
   cout << a << endl;
   
   system("pause");
   return 0;
}

/* output-------------------
ABCDEFGHIJKLMNOPQRSTUVWXYZ
--------------------------*/
