// hw12_4,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
   public:
      char id;
      int width;
      int height;
      string title;

      void set_title(char *str)
      {
         title=str;
      }

      void display(void)
      {
         cout << "title=" << title << endl;
      }
      int area(void)
      {
         return width*height;
      }
};

int main(void)
{
   CWin win1;

   win1.id='A';
   win1.width=50;
   win1.height=40;

   win1.set_title("My Windows");

   cout << "Window " << win1.id << ":" << endl;
   win1.display();
   cout << "Area= "<< win1.area() << endl;

   system("PAUSE");
   return 0;
}

/* output---------
Window A:
title=My Windows
Area= 2000
----------------*/
