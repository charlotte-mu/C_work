//hw11_8,
#include <iostream>
#include <cstdlib>
using namespace std;
union mydata
{
   float f;
   int i;
}num;
int main(void)
{
   char tem;
   do{
      cout << "(1)�H�B�I�ƭp�⥭���" << endl;
      cout << "(2)�H��ƭp�⥭���" << endl;
      cout << "�п��(1)��(2): ";
      cin.get(tem);
      cin.get();
   }while((tem>50)||(tem<49));

   if(tem=='1')
   {
      cout << "��J�B�I��:";
      cin  >> num.f;
   }
   else
   {
      cout << "��J���:";
      cin  >> num.i;
   }

   cout << "**** Output ****" << endl;

   if(tem=='1')
     cout << num.f << "*" << num.f << "="
          << num.f*num.f << endl;
   else
      cout << num.i << "*" << num.i<< "="
           << num.i*num.i << endl;

   system("pause");
   return 0;
}

/* output---------------------------
(1)�H�B�I�ƭp�⥭���
(2)�H��ƭp�⥭���
�п��(1)��(2): 1
��J�B�I��:2.5
**** Output ****
2.5*2.5=6.25
----------------------------------*/
