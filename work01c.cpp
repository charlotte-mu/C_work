#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct{
	int l;
	int w;
	int h;
}data;

data input(void);
int add(data,int[]);
void output(data,int);

int main(void){
	data data;
	int reg[2];
	int ans;
	
	printf("��J�q�D�j�p = ");
	scanf("%d %d",&reg[0],&reg[1]);
	
	while(1){
		data = input();
		if(data.l<=0 | data.w<=0 | data.h<=0){
			break;
		}
		ans = add(data,reg);
		output(data,ans);
	}
	
	system("pause");
	return 0;
}

data input(void){
	data data;

	printf("��J���B�e�B��(m)=");
	scanf("%d %d %d",&data.l,&data.w,&data.h);
	
	return data;
	
}
int add(data data,int reg[2]){
	int ans=0,reg1[3],a=-1,b=-1;
	reg1[0] = data.l;
	reg1[1] = data.w;
	reg1[2] = data.h;

	return ans;
}
void output(data data1,int ans){
	
	printf("\n");
	return ;
}
