#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct{
	int d[2];
}reg;

class win1{
	public:
		int l;
		int w;
		//
		void input(void){
			printf("輸入牆洞之長、寬(m) = ");
			scanf("%d %d",&l,&w);
			printf("洞寬 %d 洞長 %d \n",l,w);
		}
		//
		reg add(void){
			reg reg;
			int reg2;
			reg.d[0] = l;
			reg.d[1] = w;
			if(reg.d[0]<reg.d[1]){
				reg2 = reg.d[0];
				reg.d[0] = reg.d[1];
				reg.d[1] = reg2;
			}
			return reg;
		}
};

class win2{
	public:
		int l;
		int w;
		int h;
		//
		int input(void){
			printf("輸入長、寬、高(m)=");
			scanf("%d %d %d",&l,&w,&h);
			if(l<=0 | h<=0 | w<=0){
				return 0;
			}
			return 1;
		}
		//
		int add(reg reg){
			int ans=0,reg1[3],reg2,a=-1,b=-1,reg3[3],a1=-1,b1=-1;
			reg1[0] = l;
			reg1[1] = w;
			reg1[2] = h;
			for(int i=0;i<3;i++){
				reg3[i] = reg1[i];
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
				if(reg1[i]<=reg.d[0]){
					a1 = i;
					break;
				}
				else if(reg1[2]>reg.d[0]){
					return 0;
				}
			}
			for(int i=0;i<3;i++){
				if(reg1[i] <= reg.d[1] && i != a1){
					b1 = i;
					break;
				}
				else if(reg1[2]>reg.d[1]){
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
		//
		void output(int ans,reg reg){
			switch(ans){
				case 0:
					printf("洞寬 %d 洞長 %d <-- 長 %d 寬 %d 高 %d \n [不通過]\n",reg.d[0],reg.d[1],l,w,h);
					break;
				case 1:
					printf("洞寬 %d 洞長 %d <-- 長 %d 寬 %d 高 %d \n [通過]\n",reg.d[0],reg.d[1],l,w,h);
					break;
				case 2:
					printf("洞寬 %d 洞長 %d <-- 長 %d 高 %d 寬 %d \n [通過]\n",reg.d[0],reg.d[1],l,h,w);
					break;
				case 3:
					printf("洞寬 %d 洞長 %d <-- 寬 %d 高 %d 長 %d \n [通過]\n",reg.d[0],reg.d[1],w,h,l);
					break;
				case 4:
					printf("洞寬 %d 洞長 %d <-- 高 %d 寬 %d 長 %d \n [通過]\n",reg.d[0],reg.d[1],h,w,l);
					break;
				case 5:
					printf("洞寬 %d 洞長 %d <-- 高 %d 長 %d 寬 %d \n [通過]\n",reg.d[0],reg.d[1],h,l,w);
					break;
				case 6:
					printf("洞寬 %d 洞長 %d <-- 寬 %d 長 %d 高 %d \n [通過]\n",reg.d[0],reg.d[1],w,l,h);
					break;
			}
			return ;
		}
};


int main(void){
	reg reg1;
	int ans;
	int test;
	win1 data1;
	win2 data2;
	//
	data1.input();
	reg1 = data1.add();
	while(1){
		test = data2.input();
		if(test == 0){
			break;
		}
		ans = data2.add(reg1);
		data2.output(ans,reg1);
	}
	
	system("pause");
	return 0;
}
