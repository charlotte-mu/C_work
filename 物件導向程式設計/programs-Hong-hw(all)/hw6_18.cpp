// hw6_18,
#include <iostream>
#include <cstdlib>
using namespace std;
static int km;
double miles(void);
int main(void)
{ 
   for(km=10;km<=30;km+=5)
      cout << km << "����=" << miles() << "�^��" << endl; 
 
   system("pause");
   return 0;
}

double miles(void)
{
   return (1/1.6*km);
}

/* output-----------------
10����=6.25�^��
15����=9.375�^��
20����=12.5�^��
25����=15.625�^��
30����=18.75�^��
------------------------*/
