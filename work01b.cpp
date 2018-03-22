#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct{
	int d[3];
}reg;

typedef struct{
	int l;
	int w;
	int h;
}data;

data input(void);
reg add(data);
void output(data,reg);

int main(void){
	data data;
	reg ans;
	while(1){
		data = input();
		if(data.l<=0 | data.w<=0 | data.h<=0){
			break;
		}
		ans = add(data);
		output(data,ans);
	}
	
	system("pause");
	return 0;
}

data input(void){
	data data;

	printf("輸入長、寬、高(m)=");
	scanf("%d %d %d",&data.l,&data.w,&data.h);
	
	return data;
	
}
reg add(data data){
	int a;
	reg reg;
	reg.d[0] = data.l;
	reg.d[1] = data.w;
	reg.d[2] = data.h;
	for(int j=0;j<3;j++){
		for(int i=0;i<2;i++){
			if(reg.d[i]>reg.d[i+1]){
				a = reg.d[i];
				reg.d[i] = reg.d[i+1];
				reg.d[i+1] = a;
			}
		}
	}
	return reg;
}
void output(data data1,reg ans){
	for(int i=0;i<3;i++){
		if(ans.d[i]== data1.l){
			printf("長 %d ",ans.d[i]);
		}
		else if(ans.d[i]== data1.w){
			printf("寬 %d ",ans.d[i]);
		}
		else if(ans.d[i]== data1.h){
			printf("高 %d ",ans.d[i]);
		}
	}
	printf("\n");
	return ;
}
