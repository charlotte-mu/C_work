// hw19_6c,
#include <iostream>
#include <cstdlib>
using namespace std;
template <class T1,class T2>
double times(T1 a,T2 b)
{
   double sum=a*b;
   return sum;
}

int main(void)
{
   cout << "times(3.7,4)=" << times(3.7,4) << endl;
   cout << "times(3,4.2)=" << times(3,4.2) << endl;

   system("pause");
   return 0;
}

/* output--------------------------------
times(3.7,4)=14.8
times(3,4.2)=12.6
---------------------------------------*/
