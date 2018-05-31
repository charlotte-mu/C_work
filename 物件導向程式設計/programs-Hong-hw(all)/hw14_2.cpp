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
        cout << "�غc���Q�I�s�F..." << endl;
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
    cout << "�Ѻc���Q�I�s�F,win " << this->id << "�Q�P���F..." << endl;
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
�غc���Q�I�s�F...
�غc���Q�I�s�F...
�غc���Q�I�s�F...
�غc���Q�I�s�F...
window A: width=50, height=40
window B: width=40, height=50
�Ы����N���~�� . . .
�Ѻc���Q�I�s�F,win D�Q�P���F...
�Ы����N���~�� . . .
�Ѻc���Q�I�s�F,win C�Q�P���F...
�Ы����N���~�� . . .
�Ѻc���Q�I�s�F,win B�Q�P���F...
�Ы����N���~�� . . .
�Ѻc���Q�I�s�F,win A�Q�P���F...
�Ы����N���~�� . . .
-------------------------------*/
