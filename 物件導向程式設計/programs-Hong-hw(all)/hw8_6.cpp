// hw8_6,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a[2][3]={{51,5,6},{3,8,25}};
   int min=a[0][0];
   int i,j,min1,min2;
   for(i=0;i<2;i++)
      for(j=0;j<3;j++)
      {
         cout << "a[" << i << "][" << j << "]=";
         cout << a[i][j] << endl;
         if(a[i][j]<min)        
         {
            min=a[i][j];
            min1=i;            
            min2=j;             
         }
      }
   cout << endl;
   cout << "最小值註標為" << "[" << min1 << "][" << min2 << "]";
   cout << ", 其值為 " << min << endl;
    
   system("pause");
   return 0;
}

/* output--------------------------------
a[0][0]=51
a[0][1]=5
a[0][2]=6
a[1][0]=3
a[1][1]=8
a[1][2]=25

最小值註標為[1][0], 其值為 3
---------------------------------------*/
