// hw14_10,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa
{
   private:
      int total;
      int *ptr;

   public:
      Caaa(int num) // 建構元
      {
         total=num;
         ptr=new int[total];

         for(int i=0;i<total;i++)
         {
            cout << "input arr[" << i << "]: ";
            cin >> *(ptr+i);
         }
      }
      Caaa(const Caaa &aaa) // 拷貝建構元
      {
         cout << "拷貝建構元被呼叫了..." << endl;
         total=aaa.total;
         ptr=new int[total];
         for(int i=0;i<total;i++)
            *(ptr+i)=*(aaa.ptr+i);
      }
      ~Caaa()   // 解構元
      {
         cout << "解構元被呼叫了" << endl;
         delete ptr;
         system("pause");
       }
       void show()
       {
          for(int i=0;i<total;i++)
             cout << "arr[" << i << "]=" << *(ptr+i) << endl;
      }
};

int main(void)
{
   Caaa aa(3);
   aa.show();
   Caaa bb(aa);
   bb.show();

   system("pause");
   return 0;
}

/* output--------------------------
input arr[0]: 10
input arr[1]: 20
input arr[2]: 30
arr[0]=10
arr[1]=20
arr[2]=30
拷貝建構元被呼叫了...
arr[0]=10
arr[1]=20
arr[2]=30
請按任意鍵繼續 . . .
解構元被呼叫了
請按任意鍵繼續 . . .
解構元被呼叫了
請按任意鍵繼續 . . .
---------------------------------*/
