// hw7_14,
#include <iostream>
#include <cstdlib>
using namespace std;
double triangle(int base=2,int height=1);
int main(void)
{  
   cout << triangle() << endl; 
   cout << triangle(10) << endl;
   cout << triangle(12,3) << endl;
   
   system("pause");
   return 0;
}

double triangle(int base,int height)
{  
   cout << "base=" << base << ", height=" << height;
   cout << ", area=";
   return (base*height/2.0);
}

/* output-------------------------
base=2, height=1, area=1
base=10, height=1, area=5
base=12, height=3, area=18
--------------------------------*/
