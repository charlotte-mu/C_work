// hw14_6,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa
{
   public:
     Caaa();
    ~Caaa();

 };
Caaa::Caaa()
{
   cout << "constructor celled" << endl;
}

Caaa::~Caaa()
{
   cout << "destructor called " << endl;
   system("pause");
}

int main(void)
{
   Caaa *ptr;
   ptr=new Caaa;

   delete ptr;
   system("pause");
   return 0;
}

/* output------------
constructor celled
destructor called
請按任意鍵繼續 . . .
請按任意鍵繼續 . . .
-------------------*/
