// hw6_20,
#include<iostream>
#include<cstdlib>
using namespace std;
float fact(int);
int main(void)
{
    int i;
    float sum=0;
    for(i=1;i<=10;i++)
       sum=sum+1./fact(i);
    cout <<"1/1!+1/2!+..+1/10!=" << sum << endl;
    system("pause");
    return 0;
}

float fact (int a)
{
  if(a==0)
     return 1;
  else return (a*fact(a-1));
}    

/* output-------------------
1/1!+1/2!+..+1/10!=1.71828
--------------------------*/
