// hw16_22,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // �w�qCWin���O�A�b���������O
{
   protected:
     char id;

   public:
     CWin(char i):id(i){}
     void show_member(void);
};
void CWin::show_member(void)  	// �����O��show_member()���
{
   cout << "�����O��show_member()��ƳQ�I�s�F..." << endl;
   cout << "Window " << id << endl;
}

class CTextWin:public CWin	// �w�qCTextWin���O�A�~�Ӧ�CWin���O
{
   private:                  	// �l���O�̪��p������
      char text[20];

   public:
      CTextWin(char i,char *tx):CWin('i')     // �l���O���غc��
      {
         strcpy(text,tx);
      }
      void show_member(void);
};
void CTextWin::show_member(void)
{
   cout << "�l���O��show_member()��ƳQ�I�s�F..." << endl;
   cout << "Window " << id << ": ";
   cout << "text = " << text << endl;
}

int main(void)
{
   CTextWin txt('A',"Hello C++");		// �إߤl���O������

   txt.show_member();			// �H�l���O����I�sshow_member()���

   system("pause");
   return 0;
}

/* output-------------------------------
�l���O��show_member()��ƳQ�I�s�F...
Window i: text = Hello C++
--------------------------------------*/
