#include<iostream>
#include<cstdlib>
using namespace std;

typedef union{
	int sub1;
	int sub2;
}student;

typedef struct{
	char id[5];
	int ele;
	int chinese;
	student sub;
	float average;
}temper;

void calc(temper *,int);

int main(void){
	temper et[5]={{"A01",0,80,92},{"A02",1,70,20},{"A03",0,60,77},{"A04",1,98,81},{"A05",0,40,81}};
	int a,max;
	
	calc(et,5);
	
	printf(" ID CH s1 s2 avg\n");
	
	for(int i=0;i<5;i++){
		if(et[i].ele == 0)
			printf("%s %d %d %s %.1f\n",et[i].id,et[i].chinese,et[i].sub.sub1,"NA",et[i].average);
		else
			printf("%s %d %s %d %.1f\n",et[i].id,et[i].chinese,"NA",et[i].sub.sub2,et[i].average);
	}
	
	max = et[0].average;
	
	for(int i=0;i<5;i++){
		if(et[i].average > max){
			max = et[i].average;
			a = i;
		}
	}
	
	printf("\n");
	printf(" ID CH s1 s2 avg\n");
	
	if(et[a].ele == 0)
		printf("%s %d %d %s %.1f\n",et[a].id,et[a].chinese,et[a].sub.sub1,"NA",et[a].average);
	else
		printf("%s %d %s %d %.1f\n",et[a].id,et[a].chinese,"NA",et[a].sub.sub2,et[a].average);
	
	system("pause");
	return 0;
}

void calc(temper *ptr,int on){
	for(int i=0;i<on;i++){
		(ptr+i)->average = (ptr+i)->chinese + (ptr+i)->sub.sub1;
		(ptr+i)->average /= 2;
	}
}
