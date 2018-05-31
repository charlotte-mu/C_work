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
      Caaa(int num) // �غc��
      {
         total=num;
         ptr=new int[total];

         for(int i=0;i<total;i++)
         {
            cout << "input arr[" << i << "]: ";
            cin >> *(ptr+i);
         }
      }
      Caaa(const Caaa &aaa) // �����غc��
      {
         cout << "�����غc���Q�I�s�F..." << endl;
         total=aaa.total;
         ptr=new int[total];
         for(int i=0;i<total;i++)
            *(ptr+i)=*(aaa.ptr+i);
      }
      ~Caaa()   // �Ѻc��
      {
         cout << "�Ѻc���Q�I�s�F" << endl;
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
�����غc���Q�I�s�F...
arr[0]=10
arr[1]=20
arr[2]=30
�Ы����N���~�� . . .
�Ѻc���Q�I�s�F
�Ы����N���~�� . . .
�Ѻc���Q�I�s�F
�Ы����N���~�� . . .
---------------------------------*/
