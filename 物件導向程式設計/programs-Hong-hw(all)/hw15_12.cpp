// hw15_12,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // �w�q�������OCWin
{
   private:
     char id, *title;

   public:
     CWin(char i='D', char *text="Default window"):id(i)
     {
        title=new char[50];
        strcpy(title,text);
     }
     void set_data(char i, char *text)
     {
        id=i;
        strcpy(title,text);
     }

     void show(void)
     {
        cout << "Window " << id << ": " << title << endl;
     }

     ~CWin(){ delete [] title; }     // �Ѻc��

     CWin(const CWin &win)  // copy constructor
     {
        id=win.id;
        strcpy(title,win.title);
     }
     void operator=(const CWin &);
};

void CWin::operator=(const CWin &win)  // �w�q�]�w�B��l�u=�v���h��
{
   id=win.id;
   strcpy(this->title,win.title);  // �r�����
}

int main(void)
{
   CWin win1('A',"Main window");
   CWin win2;

   win1.show();
   win2.show();

   win1=win2;
   cout << endl << "�]�w win1=win2 ����..." << endl;
   win1.show();
   win2.show();

   win1.set_data('B',"Hello window");
   cout << endl << "��� win1����Ʀ�������..." << endl;
   win1.show();
   win2.show();

   system("pause");
   return 0;
}

/* output-------------------------------
Window A: Main window
Window D: Default window

�]�w win1=win2 ����...
Window D: Default window
Window D: Default window

��� win1����Ʀ�������...
Window B: Hello window
Window D: Default window
--------------------------------------*/
