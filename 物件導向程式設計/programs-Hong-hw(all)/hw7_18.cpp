// hw7_18,
#include <iostream>
#include <cstdlib>
using namespace std;
#define PI 3.1415926
#define VOLUMN(R) ((4/3.0)*PI*(R)*(R)*(R))
int main(void)
{
   for(int r=1;r<=5;r++)
      cout << "¥b®|=" << r << ", ²yÅé¿n=" << VOLUMN(r) << endl;
   
   system("pause");
   return 0;
}

/* output---------------
¥b®|=1, ²yÅé¿n=4.18879
¥b®|=2, ²yÅé¿n=33.5103
¥b®|=3, ²yÅé¿n=113.097
¥b®|=4, ²yÅé¿n=268.083
¥b®|=5, ²yÅé¿n=523.599
----------------------*/
