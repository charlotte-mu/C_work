// hw20_6.cpp,
#include <cstdlib>
#include <iostream>
#include "cwin.h"
#include "ctextwin.h"
using namespace std;
int main(void)
{
   CTextWin txt('A',"Hello C++");

   txt.show();

   system("pause");
   return 0;
}

/* output-----------------------------
Window A: text = Hello C++
------------------------------------*/
