// hw5_10,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int score=75;
   cout << "���Z��" << score << "��" << endl;
   if(score>79 && score<=100)
      cout << "A��" << endl;
   else if(score>59 && score<=79)
      cout << "B��" << endl;
   else if(score>=0 && score<=59)
      cout << "C��" << endl;

   system("pause");
   return 0;
}

/* output----------------
���Z��75��
B��
-----------------------*/
