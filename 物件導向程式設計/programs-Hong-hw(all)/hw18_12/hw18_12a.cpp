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
      cout << "�ɮ׶}�ҥ���..."  << endl;

   cout << "�@��" << i-1 << "�Ӧr��" << endl;

   ifile.close();

   system("pause");
   return 0;
}

/* output-------------------------------
�@��493�Ӧr��
--------------------------------------*/
