// hw8_8,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a[3][3]={{3,2,1},{5,6,7},{2,4,6}};
   int b[3][2]={{2,3},{3,4},{6,2}};
   int c[3][2]={0};
   
   for(int i=0;i<3;i++) 
      for(int j=0;j<2;j++)
      {
         for(int k=0;k<3;k++)
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
         cout << "c["<<i<<"]["<<j<<"]="<<c[i][j]<< endl;   
      }        
   
   system("pause");
   return 0;
}

/* output----
c[0][0]=18
c[0][1]=19
c[1][0]=70
c[1][1]=53
c[2][0]=52
c[2][1]=34
-----------*/
