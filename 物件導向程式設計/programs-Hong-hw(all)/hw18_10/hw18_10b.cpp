// hw18_10b,
#include <fstream>   // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
    int num,max=0;
    ifstream ifile("c:\\rand.dat",ios::binary);

    if(ifile.is_open())
    {
       for(int i=0;i<1000;i++)
       {
          ifile.read((char*) &num,sizeof(num));
          if(num>max)
             max=num;
       }
    }
    else
       cout << "�ɮ׶}�ҥ���..."  << endl;

    cout << "�̤j�Ȭ� " << max << endl;
    ifile.close();

    system("pause");
    return 0;
}

/* output-------------------------------
�̤j�Ȭ� 9978
--------------------------------------*/
