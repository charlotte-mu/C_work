// hw18_10c,
#include <fstream>   // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
    int num,sum=0;
    ifstream ifile("c:\\rand.dat",ios::binary);

    if(ifile.is_open())
    {
       for(int i=0;i<1000;i++)
       {
          ifile.read((char*) &num,sizeof(num));
          sum=sum+num;
       }
    }
    else
       cout << "�ɮ׶}�ҥ���..."  << endl;

    cout << "�����Ȭ� " << (double)sum/1000 << endl;
    ifile.close();

    system("pause");
    return 0;
}

/* output-------------------------------
�����Ȭ� 4976.89
--------------------------------------*/
