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
		printf("\n�п�J��%d��P�ǩm�W\n",i+1);
		scanf("%s",&etgrade[i].name);
		printf("�п�J��%d��P�ǰ�妨�Z\n",i+1);
		scanf("%d",&etgrade[i].chinese);
		printf("�п�J��%d��P�ǼƾǦ��Z\n",i+1);
		scanf("%d",&etgrade[i].math);
		printf("�п�J��%d��P�ǭ^�妨�Z\n",i+1);
		scanf("%d",&etgrade[i].eng);
	}
	for(int i=0;i<5;i++){
		ans[i] = (etgrade[i].chinese) + (etgrade[i].math) + (etgrade[i].eng);
	}
	for(int i=0;i<5;i++){
		printf("��%d��P�ǩm�W	%s\n",i+1,etgrade[i].name);
		printf("��%d��P�ǰ�妨�Z	%d\n",i+1,etgrade[i].chinese);
		printf("��%d��P�ǭ^�妨�Z	%d\n",i+1,etgrade[i].math);
		printf("��%d��P�ǼƾǦ��Z	%d\n",i+1,etgrade[i].eng);
		printf("��%d��P���`���Z	%d\n\n",i+1,ans[i]);
	}
	system("pause");
	return 0;
}


