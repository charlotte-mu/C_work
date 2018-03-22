#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct{
	int l;
	int w;
	int h;
}data;

data input(void);
int add(data);
void output(int);

int main(void){
	data data;
	int ans;
	
	while(1){
		data = input();
		if(data.l<=0 | data.h<=0 | data.w<=0){
			break;
		}
		ans = add(data);
		output(ans);
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
int add(data data){
	int ans;
	ans = data.h*data.l*data.w;
	return ans;
}
void output(int ans){
	printf("體積 = %d\n",ans);
	return ;
}
