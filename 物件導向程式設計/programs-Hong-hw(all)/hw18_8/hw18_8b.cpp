// hw18_8b,
#include <fstream>   // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
    int sum=0;
    char text[80];
    ifstream ifile("c:\\rand.txt",ios::in);

    if(ifile.is_open())
    {
       for(int i=0;i<1000;i++)
       {
          ifile >> text;
          sum+=atoi(text);
       }
    }
    else
       cout << "�ɮ׶}�ҥ���..."  << endl;
    cout << "average= "  << (double)sum/1000 << endl;

    ifile.close();

    system("pause");
    return 0;
}

/* output-------------------------------
average= 5003.68
--------------------------------------*/
