// hw18_10b,
#include <fstream>   // 載入fstream標頭檔
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
       cout << "檔案開啟失敗..."  << endl;

    cout << "最大值為 " << max << endl;
    ifile.close();

    system("pause");
    return 0;
}

/* output-------------------------------
最大值為 9978
--------------------------------------*/
