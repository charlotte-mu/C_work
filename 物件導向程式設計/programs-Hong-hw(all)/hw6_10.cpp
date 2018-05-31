// hw6_10,
#include <iostream>
#include <cstdlib>
using namespace std;
float power(float,int);
int main(void)
{
   float p,t,r;
   int n;
   cout << "請輸入本金:";
   cin >> p;
   cout << "請輸入月利率:";
   cin >> r;
   r/=100;
   cout << "請輸入存款期數(月):";
   cin >> n;
   t=p*power((1+r),n);
   cout << "本利和=" << t << endl;
   
   system("pause");
   return 0;
}

float power(float x,int n)
{
   float p=1.0f;
   for(int i=0;i<n;i++)
      p*=x;
   return p;
}

/* output------------
請輸入本金:10000
請輸入月利率::0.4
請輸入存款期數(月):12
本利和=10490.7
-------------------*/
