// hw18_8b,
#include <fstream>   // 載入fstream標頭檔
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
       cout << "檔案開啟失敗..."  << endl;
    cout << "average= "  << (double)sum/1000 << endl;

    ifile.close();

    system("pause");
    return 0;
}

/* output-------------------------------
average= 5003.68
--------------------------------------*/
