// hw8_12,
#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 10
void print_matrix(int []),count(int []);
int main(void)
{
   int data[SIZE]={51,36,88,74,45,3,98,71,63,55};
   cout << "elements in array:";
   print_matrix(data);
   count(data);
   
   system("pause");
   return 0;
}

void print_matrix(int a[])
{
   int i;
   for(i=0;i<SIZE;i++)	  // 皚ず甧 
      cout << a[i] << " ";
   cout << endl;
   return;
}

void count(int a[])
{
   int i,cnt1=0,cnt2=0;
   for(i=0;i<SIZE;i++)	  // 璸衡皚ず计の案计计
      if(a[i]%2==1)
         cnt1++;
      else 
         cnt2++;
   cout << "There are " << cnt1 << " odd";
   cout << " and " << cnt2 << " even numbers" << endl;
   return;
}

/* output--------------------------------------
elements in array:51 36 88 74 45 3 98 71 63 55
There are 6 odd and 4 even numbers
---------------------------------------------*/
