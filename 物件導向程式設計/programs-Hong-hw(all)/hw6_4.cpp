// hw6_4,
#include <iostream>
#include <cstdlib>
using namespace std;
int cub(int);
int main(void)
{     
   int i=2;
   cout << i << "��3����=" << cub(i) << endl;
   system("pause");
   return 0;
}

int cub(int x)
{
   return x*x*x;
} 

/* output-----
2��3����=8
------------*/
