// hw14_4,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa
{
   public:
     Caaa();
    ~Caaa();
};

Caaa::Caaa()    // 建構元
{
   cout << "constructor called"<< endl;
}

Caaa::~Caaa()   // 解構元
{
   cout << "destructor called "<< endl;
   system("pause");
}

int main(void)
{
   Caaa obj;
   cout << "sizeof(obj)=" << sizeof(obj) << endl;
   
   system("pause");
   return 0;
}

/* output 在Dev C++與Visual C++裡編譯執行時的結果 ---
constructor called
sizeof(obj)=1
請按任意鍵繼續 . . .
destructor called
請按任意鍵繼續 . . .
------------------------------------------------*/

/* output 在C++Builder 6裡編譯執行時的結果 ----------
constructor called
sizeof(obj)=8
請按任意鍵繼續 . . .
destructor called
請按任意鍵繼續 . . .
------------------------------------------------*/
