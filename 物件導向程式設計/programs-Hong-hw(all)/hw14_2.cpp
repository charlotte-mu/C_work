// hw14_2,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
  private:
     char id;
     int width, height;

  public:
     CWin(char i,int w,int h):id(i),width(w),height(h)
     {
        cout << "建構元被呼叫了..." << endl;
     }
     ~CWin();

     void show_member(void)
     {
        cout << "window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
 };

CWin::~CWin()
{
    cout << "解構元被呼叫了,win " << this->id << "被銷毀了..." << endl;
    system("pause");
}
 int main(void)
 {
    CWin win1('A',50,40);
    CWin win2('B',40,50);
    CWin win3('C',60,70);
    CWin win4('D',90,40);

    win1.show_member();
    win2.show_member();

   system("pause");
   return 0;
}

/* output------------------------
建構元被呼叫了...
建構元被呼叫了...
建構元被呼叫了...
建構元被呼叫了...
window A: width=50, height=40
window B: width=40, height=50
請按任意鍵繼續 . . .
解構元被呼叫了,win D被銷毀了...
請按任意鍵繼續 . . .
解構元被呼叫了,win C被銷毀了...
請按任意鍵繼續 . . .
解構元被呼叫了,win B被銷毀了...
請按任意鍵繼續 . . .
解構元被呼叫了,win A被銷毀了...
請按任意鍵繼續 . . .
-------------------------------*/
