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
      cout << "�ɮ׶}�ҥ���..."  << endl;

   cout << "�@��" << i << "�� is ��r" << endl;

   ifile.close();

   system("pause");
   return 0;
}

/* output-------------------------------
�@��3�� is ��r
--------------------------------------*/
