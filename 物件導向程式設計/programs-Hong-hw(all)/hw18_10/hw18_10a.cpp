// hw18_10a,
#include <fstream>   // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
    int num;
    ofstream ofile("c:\\rand.dat",ios::binary);

    if(ofile.is_open())
    {
       for(int i=0;i<1000;i++)
       {
          num=(int)(rand()/32767.*10000);
          ofile.write((char*) &num,sizeof(num));
       }
       cout << "�w�N1000�ӶüƦs�J�G�i���ɮפ�..." << endl;
    }
    else
       cout << "�ɮ׶}�ҥ���..."  << endl;
    ofile.close();

    system("pause");
    return 0;
}

/* output-------------------------------
�w�N1000�ӶüƦs�J�G�i���ɮפ�...
--------------------------------------*/
