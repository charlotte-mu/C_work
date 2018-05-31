// 標頭檔ctextwin.h，用來儲存CTextWin類別的定義
using namespace std;
class CTextWin : public CWin     // 定義子類別CTextWin
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
