// hw8_26,
#include <iostream>
#include <cstdlib>
#include <string> 
using namespace std;
int main(void)
{
   int i,total=0;
   string str[5];
   for(i=0;i<5;i++)
   {
      cout << "Input string #" << i+1 << ":";
      getline(cin,str[i]);  
   }   
   for(i=0;i<5;i++)
      total=total+str[i].length();
   cout << "字串共有 " << total << " 個字元數" << endl; 
         
   system("pause");
   return 0;
}

/* output-------------------------
Input string #1:Hello Kitty
Input string #2:Thomas & Friends
Input string #3:Snoopy
Input string #4:Winnie the Pooh
Input string #5:Mickey Mouse
字串共有 60 個字元數
--------------------------------*/
