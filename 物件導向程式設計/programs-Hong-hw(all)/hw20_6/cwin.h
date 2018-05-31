// 標頭檔cwin.h，用來儲存CWin類別的定義
class CWin    // 定義父類別CWin
{
   private:
     char id;

   public:
     CWin(char i):id(i) {}

     char get_id()		// get_id()函數，用來取得id成員
     {
        return id;
     }
};
