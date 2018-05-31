// hw16_24,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // �w�qCWin���O�A�b���������O
{
   protected:
     char id;

   public:
     CWin(char i='D'):id(i)   // �����O���غc��
     {
        cout << "CWin()�غc���Q�I�s�F..." << endl;
     }
     CWin(const CWin& win)    // �����O�������غc��
     {
        cout << "CWin()�����غc���Q�I�s�F..." << endl;
        id=win.id;
     }
     ~CWin()     // �����O���Ѻc��
     {
        cout << "CWin()�Ѻc���Q�I�s�F... " << endl;
        system("pause");
     }
};

class CTextWin : public CWin  // �w�qCTextWin���O�A�~�Ӧ�CWin���O
{
   private:                  // �l���O�̪��p������
      char text[20];

   public:
      CTextWin(char i,char *tx):CWin(i)     // �l���O���غc��
      {
         cout << "CTextWin()�غc���Q�I�s�F..." << endl;
         strcpy(text,tx);         
      }
      CTextWin(const CTextWin &tx):CWin(tx)  // �l���O�������غc��
      {
         cout << "CTextWin()�����غc���Q�I�s�F..." << endl;
         strcpy(text,tx.text);
      }
      ~CTextWin()
      {
         cout << "CTextWin()�Ѻc���Q�I�s�F... " << endl;
         system("pause");
      }
      void show_member()       // �l���O��show_member()���
      {
         cout << "Window " << id << ": ";
         cout << "text = " << text << endl;
      }
      void set_member(char i,char *tx)  // �l���O��set_member()���
      {
         id=i;
         strcpy(text,tx);         
      }
};

int main(void)
{
   CTextWin tx1('A',"Hello C++");		// �إߤl���O������
   CTextWin tx2(tx1);

   tx1.show_member();
   tx2.show_member();

   cout << "���tx1���󪺦�������..." << endl;
   tx1.set_member('B',"Welcome C++");

   tx1.show_member();
   tx2.show_member();

   system("pause");
   return 0;
}

/* output-------------------------------
CWin()�غc���Q�I�s�F...
CTextWin()�غc���Q�I�s�F...
CWin()�����غc���Q�I�s�F...
CTextWin()�����غc���Q�I�s�F...
Window A: text = Hello C++
Window A: text = Hello C++
���tx1���󪺦�������...
Window B: text = Welcome C++
Window A: text = Hello C++
�Ы����N���~�� . . .
CTextWin()�Ѻc���Q�I�s�F...
�Ы����N���~�� . . .
CWin()�Ѻc���Q�I�s�F...
�Ы����N���~�� . . .
CTextWin()�Ѻc���Q�I�s�F...
�Ы����N���~�� . . .
CWin()�Ѻc���Q�I�s�F...
�Ы����N���~�� . . .
--------------------------------------*/
