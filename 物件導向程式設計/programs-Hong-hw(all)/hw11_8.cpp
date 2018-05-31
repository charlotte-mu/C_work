//hw11_8,
#include <iostream>
#include <cstdlib>
using namespace std;
union mydata
{
   float f;
   int i;
}num;
int main(void)
{
   char tem;
   do{
      cout << "(1)以浮點數計算平方值" << endl;
      cout << "(2)以整數計算平方值" << endl;
      cout << "請選擇(1)或(2): ";
      cin.get(tem);
      cin.get();
   }while((tem>50)||(tem<49));

   if(tem=='1')
   {
      cout << "輸入浮點數:";
      cin  >> num.f;
   }
   else
   {
      cout << "輸入整數:";
      cin  >> num.i;
   }

   cout << "**** Output ****" << endl;

   if(tem=='1')
     cout << num.f << "*" << num.f << "="
          << num.f*num.f << endl;
   else
      cout << num.i << "*" << num.i<< "="
           << num.i*num.i << endl;

   system("pause");
   return 0;
}

/* output---------------------------
(1)以浮點數計算平方值
(2)以整數計算平方值
請選擇(1)或(2): 1
輸入浮點數:2.5
**** Output ****
2.5*2.5=6.25
----------------------------------*/
