// hw18_8a,
#include <fstream>   // 載入fstream標頭檔
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
       cout << "1000個亂數已儲存到檔案中..." << endl;
    }
    else
       cout << "檔案開啟失敗..."  << endl;
    ofile.close();

    system("pause");
    return 0;
}

/* output-------------------------------
1000個亂數已儲存到檔案中...
--------------------------------------*/
