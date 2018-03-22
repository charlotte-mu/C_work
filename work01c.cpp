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
void output(data,int,int[]);

int main(void){
	data data;
	int reg[2];
	int ans;
	
	printf("��J��}�����B�e(m) = ");
	scanf("%d %d",&reg[0],&reg[1]);
	printf("�}�e %d �}�� %d \n",reg[0],reg[1]);
	
	while(1){
		data = input();
		if(data.l<=0 | data.w<=0 | data.h<=0){
			break;
		}
		ans = add(data,reg);
		output(data,ans,reg);
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
	int ans=0,reg1[3],a=-1,b=-1,reg2,reg3[3],a1=-1,b1=-1;
	reg1[0] = data.l;
	reg1[1] = data.w;
	reg1[2] = data.h;
	for(int i=0;i<3;i++){
		reg3[i] = reg1[i];
	}
	if(reg[0]<reg[1]){
		reg2 = reg[0];
		reg[0] = reg[1];
		reg[1] = reg2;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			if(reg1[j]<reg1[j+1]){
				reg2 = reg1[j];
				reg1[j] = reg1[j+1];
				reg1[j+1] = reg2;
			}
		}
	}
	for(int i=0;i<3;i++){
		if(reg1[i]<=reg[0]){
			a1 = i;
			break;
		}
		else if(reg1[2]>reg[0]){
			return 0;
		}
	}
	for(int i=0;i<3;i++){
		if(reg1[i] <= reg[1] && i != a1){
			b1 = i;
			break;
		}
		else if(reg1[2]>reg[1]){
			return 0;
		}
	}
	for(int i=0;i<3;i++){
		if(reg3[i]==reg1[a1]){
			b = i;
		}
	}
	for(int i=0;i<3;i++){
		if(reg3[i]==reg1[b1] && i != b){
			a = i;
		}
	}
	if(a==0 && b==1)
		ans = 1;
	else if(a==0 && b==2)
		ans = 2;
	else if(a==1 && b==2)
		ans = 3;
	else if(a==2 && b==1)
		ans = 4;
 	else if(a==2 && b==0)
		ans = 5;
	else if(a==1 && b==0)
		ans = 6;
	return ans;
}
void output(data data,int ans,int reg[2]){
	switch(ans){
		case 0:
			printf("�}�e %d �}�� %d <-- �� %d �e %d �� %d \n [���q�L]\n",reg[0],reg[1],data.l,data.w,data.h);
			break;
		case 1:
			printf("�}�e %d �}�� %d <-- �� %d �e %d �� %d \n [�q�L]\n",reg[0],reg[1],data.l,data.w,data.h);
			break;
		case 2:
			printf("�}�e %d �}�� %d <-- �� %d �� %d �e %d \n [�q�L]\n",reg[0],reg[1],data.l,data.h,data.w);
			break;
		case 3:
			printf("�}�e %d �}�� %d <-- �e %d �� %d �� %d \n [�q�L]\n",reg[0],reg[1],data.w,data.h,data.l);
			break;
		case 4:
			printf("�}�e %d �}�� %d <-- �� %d �e %d �� %d \n [�q�L]\n",reg[0],reg[1],data.h,data.w,data.l);
			break;
		case 5:
			printf("�}�e %d �}�� %d <-- �� %d �� %d �e %d \n [�q�L]\n",reg[0],reg[1],data.h,data.l,data.w);
			break;
		case 6:
			printf("�}�e %d �}�� %d <-- �e %d �� %d �� %d \n [�q�L]\n",reg[0],reg[1],data.w,data.l,data.h);
			break;
	}
	return ;
}
