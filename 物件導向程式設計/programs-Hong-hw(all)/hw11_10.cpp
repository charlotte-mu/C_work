//hw11_10,
#include <iostream>
#include <cstdlib>
using namespace std;
enum week
{   Monday,Tuesday,Wednesday,
    Thuresday,Friday,Saturday,Sunday  } seven;

int main(void)
{

   string a[7]={"Monday","Tuesday","Wednesday","Thuresday",
                  "Friday","Saturday","Sunday"};
   for(seven=Monday;seven<=Sunday;seven=static_cast<week>(seven+1))
      cout << "星期" << seven+1 << "=" << a[seven] << endl;

   system("pause");
   return 0;
}

/* output---------------------------
星期1=Monday
星期2=Tuesday
星期3=Wednesday
星期4=Thuresday
星期5=Friday
星期6=Saturday
星期7=Sunday
----------------------------------*/
