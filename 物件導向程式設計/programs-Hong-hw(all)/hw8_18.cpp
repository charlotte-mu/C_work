// hw8_18,
#include <iostream>
#include <cstdlib>
#include<string>
using namespace std;
void reverse(char []);
int main(void)
{
   char a[20]={'\0'};
   cout << "Input a string:";
   cin.getline(a,20);
   cout << "锣传玡string=" << a << endl; 
   reverse(a); 
   cout << "锣传string=" ; 
   for(int i=0;i<20;i++)
      if(a[i]!=0)
         cout << a[i];
   cout << endl;
   
   system("pause");
   return 0;
}

void reverse(char a[20])
{
   int i;
   char b[20];
   for(i=0;i<20;i++)
       b[19-i]=a[i];
   for(i=0;i<20;i++)
       a[i]=b[i];
   return ;
}

/* output------------
Input a string:milk
锣传玡string=milk
锣传string=klim

-------------------*/
