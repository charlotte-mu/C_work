// hw18_8a,
#include <fstream>   // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
    ofstream ofile("c:\\rand.txt",ios::out);

    if(ofile.is_open())
    {
       for(int i=0;i<1000;i++)
          ofile << (int)(rand()/32767.*10000) << endl;
       cout << "1000�ӶüƤw�x�s���ɮפ�..." << endl;
    }
    else
       cout << "�ɮ׶}�ҥ���..."  << endl;
    ofile.close();

    system("pause");
    return 0;
}

/* output-------------------------------
1000�ӶüƤw�x�s���ɮפ�...
--------------------------------------*/
