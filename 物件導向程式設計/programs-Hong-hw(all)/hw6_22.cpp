// hw6_22,
#include<iostream>
#include<cstdlib>
using namespace std;
double avg(int,int,int);
void show(int,int,int);
int main(void)
{
   int a,b,c;   
   cout <<"��Ja��:";
   cin  >>a;
   cout <<"��Jb��:";
   cin  >>b;
   cout <<"��Jc��:";
   cin  >>c;   
   cout << "avg(a,b,c)=" << avg(a,b,c) << endl;
   
   system("pause");
   return 0;
}

double avg(int a, int b, int c)
{
   show(a,b,c);
   return (a+b+c)/3.;
}

void show(int a, int b, int c)
{
   cout << "a=" << a << ", b=" << b << ", c=" << c << endl;
}

/* output-------------------
��Ja��:5
��Jb��:17
��Jc��:3
a=5, b=17, c=3
avg(a,b,c)=8.33333
--------------------------*/
