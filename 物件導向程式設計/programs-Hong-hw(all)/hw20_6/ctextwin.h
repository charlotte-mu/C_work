// ���Y��ctextwin.h�A�Ψ��x�sCTextWin���O���w�q
using namespace std;
class CTextWin : public CWin     // �w�q�l���OCTextWin
{
   private:
      char text[20];

   public:
      CTextWin(char i,char *tx):CWin(i)
      {
         strcpy(text,tx);
      }
      void show()
      {
         cout << "Window " << get_id() << ": ";
         cout << "text = " << text << endl;
      }
};
