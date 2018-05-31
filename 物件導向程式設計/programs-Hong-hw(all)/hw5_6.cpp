// hw5_6,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int num;
   cout << "請輸入一個整數: ";
   cin >> num;
   
   cout << num << "的絕對值為";
   if(num<0)
      num=-num;      
   cout << num << endl;

   system("pause");
   return 0;
}

/* output----------------
請輸入一個整數: -6
-6的絕對值為6
-----------------------*/
