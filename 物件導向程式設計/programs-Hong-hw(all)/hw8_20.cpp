// hw8_20,
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void repeat(int,string);
int main(void)     
{
   repeat(3,"Hello,C++");
   repeat(10,"I love C++"); 
   
   system("pause");
   return 0;
} 

void repeat(int k,string str)   
{
   for(int i=1;i<=k;i++)
      cout << str << endl;  
   cout << endl;
   return;
}

/* output-------
Hello,C++
Hello,C++
Hello,C++

I love C++
I love C++
I love C++
I love C++
I love C++
I love C++
I love C++
I love C++
I love C++
I love C++

--------------*/
