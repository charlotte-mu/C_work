// hw11_4,
#include <iostream>
#include <cstdlib>
using namespace std;
struct mydata
{
   int length;
   int width;
   int hight;
};
int a(int,int,int);
int main(void)
{
   struct mydata num={10,2,3};
   cout << "長=" << num.length << endl;
   cout << "寬=" << num.width << endl;
   cout << "高=" << num.hight << endl;
   cout << "體積=" <<a(num.length,num.width,num.hight) << endl;

   system("pause");
   return 0;
}
int a(int a,int b,int c)
{
   return a*b*c;
}

/* output-------------------------------
長=10
寬=2
高=3
體積=60
--------------------------------------*/
