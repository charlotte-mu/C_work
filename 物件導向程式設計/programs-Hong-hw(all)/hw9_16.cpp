// hw9_16,
#include <iostream>
#include <cstdlib>
using namespace std;
void display(char *, int);
int main(void)
{
   char str[]="Out of sight, out of mind";
   cout << "�r�ꤺ�e��" << str << endl;
   cout << "�q��14�Ӧr���_�C�L:";
   display(str,14);

   system("pause");
   return 0;
}
void display(char *ptr,int n)
{
   for(int i=n;i<strlen(ptr);i++)
      cout << *(ptr+i);
   cout << endl;
   return;
}

/* output---------------------------
�r�ꤺ�e��Out of sight, out of mind
�q��14�Ӧr���_�C�L:out of mind
----------------------------------*/
