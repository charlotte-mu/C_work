// hw6_14,
#include <iostream>
#include <cstdlib>
using namespace std;
inline double centigrade(double f)
{
   double c;
   c=(5*f-160)/9;
   return c;
}

int main(void)
{
   for(double f=-40;f<=20;f+=10)
   {
      cout << "地ん" << f << "=尼ん";
      cout << centigrade(f) << "" << endl;
   }
   system("pause");
   return 0;
}

/* output-----------------
地ん-40=尼ん-40
地ん-30=尼ん-34.4444
地ん-20=尼ん-28.8889
地ん-10=尼ん-23.3333
地ん0=尼ん-17.7778
地ん10=尼ん-12.2222
地ん20=尼ん-6.66667
------------------------*/
