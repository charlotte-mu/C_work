// hw18_12g,
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char ch;

   ifstream ifile("c:\\Atlanta.txt",ios::in);
   ofstream ofile("c:\\lower.txt",ios::out);

   if(ifile.is_open())
   {
      while(ifile.get(ch)!='\0')
      {
         if(ch>=65 && ch<=90)
            ch=ch+32;
         ofile.put(ch);
      }
      cout << "�����ഫ���p�g�A�w�x�s��lower.txt" << endl;
   }
   else
      cout << "�ɮ׶}�ҥ���..."  << endl;

   ifile.close();
   ofile.close();

   system("pause");
   return 0;
}

/* output-------------------------------
�����ഫ���p�g�A�w�x�s��lower.txt
--------------------------------------*/
