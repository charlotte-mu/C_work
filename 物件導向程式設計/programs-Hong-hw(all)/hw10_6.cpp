// hw10_6,
#include <iostream>
#include <cstdlib>
using namespace std;
void add(int *,int *,int *);
void show(int *);
int main(void)
{
   int *ptr1,*ptr2,*ptr3;
   ptr1=new int[3];
   ptr2=new int[3];
   ptr3=new int[3];
   *ptr1=1;
   *(ptr1+1)=2;
   *(ptr1+2)=3;
   *ptr2=4;
   *(ptr2+1)=5;
   *(ptr2+2)=6;

   add(ptr1,ptr2,ptr3);
   cout << "�}�C1=";
   show(ptr1);
   cout << "�}�C2=";
   show(ptr2);
   cout << "�ۥ[�᪺���G=";
   show(ptr3);
   
   delete[] ptr1;
   delete[] ptr2;
   delete[] ptr3;

   system("pause");
   return 0;
}
void add(int *p1,int *p2,int *p3)
{
   for(int i=0;i<3;i++)
      *(p3+i)=*(p1+i) + *(p2+i);
   return;
}
void show(int *arr)
{
   for(int i=0;i<3;i++)
      cout << *(arr+i) << " ";
   cout << endl;
}
     
/* output-----------
�}�C1=1 2 3
�}�C2=4 5 6
�ۥ[�᪺���G=5 7 9
-----------------*/
