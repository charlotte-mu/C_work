// hw8_24,
#include <iostream>
#include <cstdlib>
#include <string> 
using namespace std;
int main(void)
{
   string str1;
   int index=0;
   cout << "�п�J�@�Ӧr��: ";
   getline(cin,str1);
   index=str1.find("the"); 
   if(index<0)
      cout << "the�S���X�{�b�r�ꤤ" << endl;
   else
      cout << "�r�ꤤ�X�{the����m�O" << index << endl;
   
   system("pause");
   return 0;
}

/* output------------------------------------------------
�п�J�@�Ӧr��: While the grass grows the horse starves
�r�ꤤ�X�{the����m�O6
-------------------------------------------------------*/
