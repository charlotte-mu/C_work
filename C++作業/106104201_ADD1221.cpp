#include<iostream>
#include<cstdlib>
using namespace std;

struct steugrade {
	char name[50];
	int chinese;
	int math;
	int eng;
};

int main(void){
	struct steugrade etgrade[5];
	int ans[5];
	for(int i=0;i<5;i++){
		printf("\n請輸入第%d位同學姓名\n",i+1);
		scanf("%s",&etgrade[i].name);
		printf("請輸入第%d位同學國文成績\n",i+1);
		scanf("%d",&etgrade[i].chinese);
		printf("請輸入第%d位同學數學成績\n",i+1);
		scanf("%d",&etgrade[i].math);
		printf("請輸入第%d位同學英文成績\n",i+1);
		scanf("%d",&etgrade[i].eng);
	}
	for(int i=0;i<5;i++){
		ans[i] = (etgrade[i].chinese) + (etgrade[i].math) + (etgrade[i].eng);
	}
	for(int i=0;i<5;i++){
		printf("第%d位同學姓名	%s\n",i+1,etgrade[i].name);
		printf("第%d位同學國文成績	%d\n",i+1,etgrade[i].chinese);
		printf("第%d位同學英文成績	%d\n",i+1,etgrade[i].math);
		printf("第%d位同學數學成績	%d\n",i+1,etgrade[i].eng);
		printf("第%d位同學總成績	%d\n\n",i+1,ans[i]);
	}
	system("pause");
	return 0;
}


