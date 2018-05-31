// hw8_4,
#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 100
int main(void)
{
   int score[MAX];
   int i=0,num;
   double sum=0.0;
   cout << "Enter -1 stopping input!!" << endl;
   do 
   {
      cout << "Input score:";
      cin >> score[i];
   }while(score[i++]>-1);    // 輸入成績，輸入-1時結束
   num=i-1;
   for(i=0;i<num;i++)
      sum+=score[i];		// 計算平均成績
   cout << "Average of all is " << sum/num << endl;
   
   system("pause");
   return 0;
}

/* output-----------------
Enter -1 stopping input!!
Input score:85
Input score:76
Input score:61
Input score:48
Input score:96
Input score:-1
Average of all is 73.2
------------------------*/
