// hw5_12,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int i,sum=0;

   for(i=1;i<=100;i++)
      sum+=i*i*i;
   cout << "1~100������ƪ��ߤ���`�M�� " << sum << endl;

   system("pause");
   return 0;
}

/* output--------------------------------
1~100������ƪ��ߤ���`�M�� 25502500
---------------------------------------*/
