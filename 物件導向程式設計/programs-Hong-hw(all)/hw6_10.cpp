// hw6_10,
#include <iostream>
#include <cstdlib>
using namespace std;
float power(float,int);
int main(void)
{
   float p,t,r;
   int n;
   cout << "�п�J����:";
   cin >> p;
   cout << "�п�J��Q�v:";
   cin >> r;
   r/=100;
   cout << "�п�J�s�ڴ���(��):";
   cin >> n;
   t=p*power((1+r),n);
   cout << "���Q�M=" << t << endl;
   
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
�п�J����:10000
�п�J��Q�v::0.4
�п�J�s�ڴ���(��):12
���Q�M=10490.7
-------------------*/
