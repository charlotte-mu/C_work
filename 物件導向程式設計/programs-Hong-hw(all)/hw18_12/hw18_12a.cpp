// hw18_12a,
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
  char ch;
  int i=0;
   ifstream ifile("c:\\Atlanta.txt",ios::in);

   if(ifile.is_open())
      while(ifile.get(ch)!='\0')
         i++;
   else
      cout << "檔案開啟失敗..."  << endl;

   cout << "共有" << i-1 << "個字元" << endl;

   ifile.close();

   system("pause");
   return 0;
}

/* output-------------------------------
共有493個字元
--------------------------------------*/
