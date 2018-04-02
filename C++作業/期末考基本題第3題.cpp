#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct
{
	int hour;
	int minite;
	float second;
} mytime;

void subs(mytime t[]);

int main(void){
	mytime t[4]={{6,24,45.6},{6,24,45.6},{6,24,45.6}};
	subs(t);
	for (int i=0;i<4;i++)
	{
		cout << "t[" << i << "]=" << t[i].hour << ":" << t[i].minite << ":" << t[i].second << endl;
	}
	system("pause");
	return 0;
}

void subs(mytime t[])
{
	int c2=0,c3=0;
	t[3].second=t[0].second+t[1].second+t[2].second;
	while(t[3].second>=60)
	{
		t[3].second-=60;
		c3++;
	}
	t[3].minite=t[0].minite+t[1].minite+t[2].minite+c3;
	while(t[3].minite>=60)
	{
		t[3].minite-=60;
		c2++;
	}
	t[3].hour=t[0].hour+t[1].hour+t[2].hour+c2;
}

