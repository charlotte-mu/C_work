// hw18_12f,
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char ch;

   ifstream ifile("c:\\Atlanta.txt",ios::in);
   ofstream ofile("c:\\upper.txt",ios::out);

   if(ifile.is_open())
   {
      while(ifile.get(ch)!='\0')
      {
         if(ch>=97 && ch<=122)
            ch=ch-32;
         ofile.put(ch);
      }
      cout << "全文轉換成大寫，已儲存到upper.txt" << endl;
   }
   else
      cout << "檔案開啟失敗..."  << endl;

   ifile.close();
   ofile.close();

   system("pause");
   return 0;
}

/* output-------------------------------
全文轉換成大寫，已儲存到upper.txt
--------------------------------------*/
