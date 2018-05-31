// hw8_10,
#include <iostream>
#include <cstdlib>
using namespace std;
int diff(int []); 
int main(void)
{
   int a[]={48,75,30,17,62};
   cout << "陣列內容為 ";
   for(int i=0;i<sizeof(a)/sizeof(int);i++)
      cout << a[i] << " "; 
   cout << endl; 
   cout << "差為 " << diff(a) << endl;  
   
   system("pause");
   return 0;
}

int diff(int a[])
{
   int i,maxa,max=a[0],mina,min=a[0]; 
   for(i=0;i<5;i++)   
   {
      if(a[i]>max)         
      {
         max=a[i];
         maxa=i;
      }  
      if(a[i]<min)       
      {
         min=a[i];
         mina=i;
      }        
   }
   cout << "最大值註標 [" << maxa << "]" << endl;
   cout << "最小值註標 ["  << mina << "]" << endl;  
   return (max-min);
}

/* output------------------
陣列內容為 48 75 30 17 62
最大值註標 [1]
最小值註標 [3]
差為 58
-------------------------*/
