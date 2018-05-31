// hw18_10a,
#include <fstream>   // 載入fstream標頭檔
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
       cout << "已將1000個亂數存入二進位檔案中..." << endl;
    }
    else
       cout << "檔案開啟失敗..."  << endl;
    ofile.close();

    system("pause");
    return 0;
}

/* output-------------------------------
已將1000個亂數存入二進位檔案中...
--------------------------------------*/
