// hw15_10,
#include <iostream>
#include <cstdlib>
using namespace std;
class CTime
{
   private:
      int hour,min;
      double sec;

   public:
      CTime(int h,int m,double s):hour(h),min(m),sec(s){}

      CTime(){}

      void show_time()
      {
         cout << hour << "hr " << min << "min " << sec << "sec" << endl;
      }
      double to_sec()
      {
         return hour*3600+min*60+sec;
      }
      CTime operator*(const int &var)
      {
         double time,s;
         int h,m;
         time=var*this->to_sec();
         h=(int)time/3600;
         m=((int)time-h*3600)/60;
         s=time-(h*3600+m*60);
         return CTime(h,m,s);
      }
};

CTime operator*(const int &var,CTime &t)
{
   double time;
   int h,m;
   double s;
   time=var*t.to_sec();
   h=(int)time/3600;
   m=((int)time-h*3600)/60;
   s=time-(h*3600+m*60);
   return CTime(h,m,s);
}

int main(void)
{
   CTime t1(6,35,41.6);
   CTime t2=t1*2;
   CTime t3=3*t1;

   t1.show_time();
   t2.show_time();
   t3.show_time();

   system("pause");
   return 0;
}

/* output-------------------------------
6hr 35min 41.6sec
13hr 11min 23.2sec
19hr 47min 4.8sec
--------------------------------------*/
