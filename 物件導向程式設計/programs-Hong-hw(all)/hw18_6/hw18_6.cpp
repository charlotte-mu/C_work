// hw18_6,
#include <fstream>   // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char txt[80];
   ifstream ifile1("c:\\aaa.txt",ios::in);
   ifstream ifile2("c:\\bbb.txt",ios::in);
   ofstream afile3("c:\\ccc.txt",ios::app);

   while(!ifile1.eof())   // �P�O�O�_Ū���ɮת�����
   {
      ifile1.getline(txt,80,'\n');
      afile3 << txt << endl;
   }

   while(!ifile2.eof())   // �P�O�O�_Ū���ɮת�����
   {
      ifile2.getline(txt,80,'\n');
      afile3 << txt << endl;
   }
   cout << "�w�N�ɮצX��..." << endl;
   ifile1.close();       // �����ɮ�
   ifile2.close();       // �����ɮ�
   afile3.close();       // �����ɮ�

   system("pause");
   return 0;
}

/* output-------------------------------
�w�N�ɮצX��...
--------------------------------------*/
