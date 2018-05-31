// hw18_12b,
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
   {
      while(ifile.get(ch)!='\0')
         if(ch!=' ')
           i++;
   }
   else
      cout << "檔案開啟失敗..."  << endl;

   cout << "不含空白，共有" << i-1 << "個字元" << endl;

   ifile.close();

   system("pause");
   return 0;
}

/* output-------------------------------
不含空白，共有408個字元
--------------------------------------*/
