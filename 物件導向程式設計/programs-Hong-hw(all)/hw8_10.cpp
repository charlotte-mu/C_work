// hw8_10,
#include <iostream>
#include <cstdlib>
using namespace std;
int diff(int []); 
int main(void)
{
   int a[]={48,75,30,17,62};
   cout << "�}�C���e�� ";
   for(int i=0;i<sizeof(a)/sizeof(int);i++)
      cout << a[i] << " "; 
   cout << endl; 
   cout << "�t�� " << diff(a) << endl;  
   
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
   cout << "�̤j�ȵ��� [" << maxa << "]" << endl;
   cout << "�̤p�ȵ��� ["  << mina << "]" << endl;  
   return (max-min);
}

/* output------------------
�}�C���e�� 48 75 30 17 62
�̤j�ȵ��� [1]
�̤p�ȵ��� [3]
�t�� 58
-------------------------*/
