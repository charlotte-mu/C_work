// hw2_2, C++程式舊式的寫法
#include <iostream.h>   	// 含括iostream.h檔案
#include <stdlib.h>		    // 含括stdlib.h檔案

int main(void)
{
   int num;				    // 宣告整數num
   num=3;					// 將num設值為3
   cout << "I have " << num << " apples." << endl; 
   cout << "You have " << num << " apples, too." << endl;
   system("pause");
   return 0;
}

/* 修改後的程式
// 要執行修改後的程式時， 請用註解符號將舊程式標示後，再將新程式的註解符號移除 

// hw2_2,
#include <iostream>   	// 含括iostream檔案
#include <cstdlib>		// 含括cstdlib檔案

int main(void)
{
   int num;		    	// 宣告整數num
   num=3;				// 將num設值為3
   std::cout << "I have " << num << " apples." << std::endl;
   std::cout << "You have " << num << " apples, too." << std::endl;
   system("pause");
   return 0;
}

*/

/* output---------------------
I have 3 apples.
You have 3 apples, too.
----------------------------*/
