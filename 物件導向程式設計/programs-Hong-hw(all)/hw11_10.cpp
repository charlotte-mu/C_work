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
      cout << "�P��" << seven+1 << "=" << a[seven] << endl;

   system("pause");
   return 0;
}

/* output---------------------------
�P��1=Monday
�P��2=Tuesday
�P��3=Wednesday
�P��4=Thuresday
�P��5=Friday
�P��6=Saturday
�P��7=Sunday
----------------------------------*/
