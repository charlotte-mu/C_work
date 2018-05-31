// hw5_10,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int score=75;
   cout << "成績為" << score << "分" << endl;
   if(score>79 && score<=100)
      cout << "A級" << endl;
   else if(score>59 && score<=79)
      cout << "B級" << endl;
   else if(score>=0 && score<=59)
      cout << "C級" << endl;

   system("pause");
   return 0;
}

/* output----------------
成績為75分
B級
-----------------------*/
