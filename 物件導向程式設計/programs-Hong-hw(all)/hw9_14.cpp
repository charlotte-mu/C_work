// hw9_14,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a[10],b,i;
   for(i=0;i<10;i++)
      cout << "a[" << i << "]=" << (a+i) << endl;
   cout << "b=" << &b << endl;
   cout << "位址差了 " << a-&b << " 個int的大小" << endl;
   
   system("pause");
   return 0;
}

/* output----------------
a[0]=0x22ff40
a[1]=0x22ff44
a[2]=0x22ff48
a[3]=0x22ff4c
a[4]=0x22ff50
a[5]=0x22ff54
a[6]=0x22ff58
a[7]=0x22ff5c
a[8]=0x22ff60
a[9]=0x22ff64
b=0x22ff3c
位址差了 1 個int的大小
-----------------------*/
