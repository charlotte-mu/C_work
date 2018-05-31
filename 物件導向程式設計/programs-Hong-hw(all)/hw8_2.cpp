// hw8_2,
#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 5
#define SIZE1 10
void print_matrix(int a[],int),bubble(int b[]);  
int main(void)
{
   int i;
   int data1[SIZE]={26,5,7,63,81};
   int data2[SIZE]={1,9,52,64,40};
   int data3[10]={0};
   cout << "Before process..." << endl;
   print_matrix(data1,SIZE); 
   print_matrix(data2,SIZE); 
   for(i=0;i<5;i++)                     // 將陣列data1與data2合併成data3 
   {
      data3[i]=data1[i];
      data3[i+5]=data2[i];
   }  
   bubble(data3);                      
   cout << "After process..." << endl;
   print_matrix(data3,SIZE1);              
   
   system("pause");
   return 0;
}

void print_matrix(int a[],int size)    // 印出陣列內容 
{
   int i;
   for(i=0;i<size;i++)      
      cout << a[i] << " ";
   cout << endl;
   return;
}

void bubble(int b[])                  // 排序        
{
   int i,j,temp;
   for(i=1;i<SIZE1;i++)
      for(j=0;j<(SIZE1-i);j++)
         if(b[j]>b[j+1])
         {
           temp=b[j];       
           b[j]=b[j+1];
           b[j+1]=temp;
         }   
   return;  
}

/* output-------------------------------
Before process...
26 5 7 63 81
1 9 52 64 40
After process...
1 5 7 9 26 40 52 63 64 81
--------------------------------------*/
