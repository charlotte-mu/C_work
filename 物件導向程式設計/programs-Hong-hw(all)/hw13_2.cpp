// hw13_2,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin              // �w�q�������OCWin
{
   private:
      char id;
      int width,height;

   public:
      CWin(char i,int w,int h)
      {
         id=i;
         width=w;
         height=h;
      }
      CWin()
      {
         cout<< "CWin()�غc���Q�I�s�F" << endl;
      }
      void show_member(void)
      {
         cout << "Window "<< id << ": ";
         cout << "width=" << width << ", height= " << height << endl;
      }
};

int main(void)
{
   CWin win1('A',80,80);
   CWin win2;                // �h��()�Y�i
   win1.show_member();
   win2.show_member();       // �������ȱN�|�O�O���餺���ݭ�

   system("pause");
   return 0;
}

/* output-------------------------------
CWin()�غc���Q�I�s�F
Window A: width=80, height= 80
Window : width=4007080, height= 4006960
--------------------------------------*/
