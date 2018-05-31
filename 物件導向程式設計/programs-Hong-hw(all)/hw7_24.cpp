// hw7_24,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
   int a=atoi(argv[1]);
   int b=atoi(argv[2]);   
   cout << a << "/" << b << "的餘數=" << a%b << endl ;
      
   system("pause");
   return 0;
}

/* output---------------
C:\C++>hw7_24 18 5
18/5的餘數=3
----------------------*/
