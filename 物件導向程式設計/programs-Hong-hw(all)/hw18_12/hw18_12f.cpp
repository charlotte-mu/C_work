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
      cout << "�����ഫ���j�g�A�w�x�s��upper.txt" << endl;
   }
   else
      cout << "�ɮ׶}�ҥ���..."  << endl;

   ifile.close();
   ofile.close();

   system("pause");
   return 0;
}

/* output-------------------------------
�����ഫ���j�g�A�w�x�s��upper.txt
--------------------------------------*/
