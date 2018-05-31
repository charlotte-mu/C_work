// hw18_12d,
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
  char txt[40];
  int i=0;
   ifstream ifile("c:\\Atlanta.txt",ios::in);

   if(ifile.is_open())
      while(!ifile.eof())
      {
         ifile>>txt;
         if(strcmp(txt,"is")==0)
            i++;
      }
   else
      cout << "檔案開啟失敗..."  << endl;

   cout << "共有" << i << "個 is 單字" << endl;

   ifile.close();

   system("pause");
   return 0;
}

/* output-------------------------------
共有3個 is 單字
--------------------------------------*/
