// hw4_26,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   char ch='A';
   short s=38;
   float f=10.4f;
   int i=12;
   double d=8.4;
   
   cout << "ch*(f-s)+(i/d)=" << ch*(f-s)+(i/d) << endl;   
   cout << "d-s*(i+f)-ch=" << d-s*(i+f)-ch << endl;
   cout << "(i+s)/f+ch*(s-ch)=" << (i+s)/f+ch*(s-ch) << endl;   
   cout << "5-(ch+s)/4=" << 5-(ch+s)/4 << endl;
    
   system("pause");
   return 0;
}

/* output--------------------
ch*(f-s)+(i/d)=-1792.57
d-s*(i+f)-ch=-907.8
(i+s)/f+ch*(s-ch)=-1750.19
5-(ch+s)/4=-20
--------------------------*/
