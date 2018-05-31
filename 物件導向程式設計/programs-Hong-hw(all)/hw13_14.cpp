// hw13_14,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
  private:
    char id;
    int width;
    int height;

    int area(void)
    {
       return width*height;
    }
  public:
    void show_area(CWin win)
    {
       cout << "Window " << win.id << ", area=" << win.area() << endl;
    }

    friend void set_data(CWin &win, char);
    friend void set_data(CWin &win, int, int);
    friend void set_data(CWin &win, char, int, int);
};

void set_data(CWin &win,char i,int w,int h)
{
   win.id=i;
   win.width=w;
   win.height=h;
}
void set_data(CWin &win,char i)
{
   win.id=i;
}
void set_data(CWin &win,int w,int h)
{
   win.width=w;
   win.height=h;
}

int main(void)
{
   CWin win1,win2;
   set_data(win1,'A',50,40);
   set_data(win2,'B');
   set_data(win2,80,120);

   win1.show_area(win1);
   win2.show_area(win2);

   system("PAUSE");
   return 0;
}

/* output-------------------------------
Window A, area=2000
Window B, area=9600
--------------------------------------*/
