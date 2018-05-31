// hw4_16,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int length,width,area;  
   cout << "請輸入長方形之長: ";
   cin >> length;
   cout << "請輸入長方形之寬: ";
   cin >> width;    
   area=length*width;
   cout << "長方形的面積為 " << area << endl;
   
   system("pause");
   return 0;
}

/* output----------------
請輸入長方形之長: 8
請輸入長方形之寬: 6
長方形的面積為 48
-----------------------*/
