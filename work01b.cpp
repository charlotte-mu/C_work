#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct{
	int d[3];
}data;

data input(void);
data add(data);
void output(data,data);

int main(void){
	data data,ans;
	
	while(1){
		data = input();
		if(data.d[0]<=0 | data.d[1]<=0 | data.d[2]<=0){
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

	printf("��J���B�e�B��(m)=");
	scanf("%d %d %d",&data.d[0],&data.d[1],&data.d[2]);
	
	return data;
	
}
data add(data data){

	
	return data;
}
void output(data data1,data ans){
	ans = data1;
	printf("�� %d �e %d �� %d \n",ans.d[0],ans.d[1],ans.d[2]);
	
	return ;
}
