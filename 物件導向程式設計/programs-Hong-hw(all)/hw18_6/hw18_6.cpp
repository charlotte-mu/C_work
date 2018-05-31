// hw18_6,
#include <fstream>   // 載入fstream標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char txt[80];
   ifstream ifile1("c:\\aaa.txt",ios::in);
   ifstream ifile2("c:\\bbb.txt",ios::in);
   ofstream afile3("c:\\ccc.txt",ios::app);

   while(!ifile1.eof())   // 判別是否讀到檔案的尾端
   {
      ifile1.getline(txt,80,'\n');
      afile3 << txt << endl;
   }

   while(!ifile2.eof())   // 判別是否讀到檔案的尾端
   {
      ifile2.getline(txt,80,'\n');
      afile3 << txt << endl;
   }
   cout << "已將檔案合併..." << endl;
   ifile1.close();       // 關閉檔案
   ifile2.close();       // 關閉檔案
   afile3.close();       // 關閉檔案

   system("pause");
   return 0;
}

/* output-------------------------------
已將檔案合併...
--------------------------------------*/
