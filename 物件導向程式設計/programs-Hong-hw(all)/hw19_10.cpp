// hw19_10,
#include <iostream>
#include <cstdlib>
using namespace std;
template <class T,int n>
class CArray
{
   protected:
      T arr[10];
   public:
   CArray()
   {
      for(int i=0;i<10;i++)
         arr[i]=0;
   };
   void set_data();
   void show_data();
};

template <class T, int n>
void CArray<T,n>::show_data()
{
  cout << endl << "show_data() called..." << endl;
  for(int i=0;i<n;i++)
      cout << "arr[" << i << "]= " << arr[i] << endl;
}

template <class T, int n>
void CArray<T,n>::set_data()
{
  for(int i=0;i<n;i++)
  {
      cout << "Input value for arr[" << i << "]: ";
      cin >> arr[i];
   }
}

int main(void)
{
   CArray<int,5> my_array;
   my_array.set_data();
   my_array.show_data();

   system("pause");
   return 0;
}

/* output--------------------------------
Input value for arr[0]: 5
Input value for arr[1]: 6
Input value for arr[2]: 7
Input value for arr[3]: 8
Input value for arr[4]: 9

show_data() called...
arr[0]= 5
arr[1]= 6
arr[2]= 7
arr[3]= 8
arr[4]= 9
---------------------------------------*/
