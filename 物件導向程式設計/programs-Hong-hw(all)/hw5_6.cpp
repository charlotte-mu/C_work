// hw5_6,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int num;
   cout << "�п�J�@�Ӿ��: ";
   cin >> num;
   
   cout << num << "������Ȭ�";
   if(num<0)
      num=-num;      
   cout << num << endl;

   system("pause");
   return 0;
}

/* output----------------
�п�J�@�Ӿ��: -6
-6������Ȭ�6
-----------------------*/
