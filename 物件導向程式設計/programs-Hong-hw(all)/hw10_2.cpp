// hw10_2,
#include <iostream>
#include <cstdlib>
using namespace std;
void search(int a[][3],int b[]);
int main(void)
{
   int a[4][3]={{26,65,37},{10,32,47},{69,76,18},{40,74,32}};
   int i,j,result[2]={0};
   cout << "elements in array:" << endl;
   for(i=0;i<4;i++)
   {
      for(j=0;j<3;j++)
         cout << *(*(a+i)+j) << " ";
      cout << endl;
   }
   search(a,result);
   cout << "maximum=" << *(result+0) << endl;
   cout << "minimum=" << *(result+1) << endl;
   cout << *(result+0) << "-" << *(result+1) << "=";
   cout << *(result+0)-*(result+1) << endl;

   system("pause");
   return 0;
}

void search(int a[4][3],int b[2])
{
   int i,j,max=*(*(a+0)+0),min=*(*(a+0)+0);
   for(i=0;i<4;i++)
      for(j=0;j<3;j++)
      {
         if(max<*(*(a+i)+j))
            max=*(*(a+i)+j);
         if(min>*(*(a+i)+j))
            min=*(*(a+i)+j);
      }
   *(b+0)=max;
   *(b+1)=min;
   return;
}

/* output--------------
elements in array:
26 65 37
10 32 47
69 76 18
40 74 32
maximum=76
minimum=10
76-10=66
---------------------*/
