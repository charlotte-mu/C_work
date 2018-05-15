#include<iostream>
#include<cstdlib>
using namespace std;

class win1{
	public:
		int l;
		int w;
		int data[2];
		//
		void input(void){
			printf("輸入牆洞之長、寬(m) = ");
			scanf("%d %d",&l,&w);
			printf("洞寬 %d 洞長 %d \n",l,w);
		}
		//
		void add(void){
			int reg;
			data[0] = l;
			data[1] = w;
			if(data[0]>data[1]){
				reg = data[0];
				data[0] = data[1];
				data[1] = reg;
			}
		}
};

class win2{
	public:
		int l;
		int w;
		int h;
		int data[3];
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
		void add(void){
			int reg;
			data[0] = l;
			data[1] = w;
			data[2] = h;
			for(int i=0;i<3;i++){
				for(int j=0;j<2;j++){
					if(data[j]>data[j+1]){
						reg = data[j];
						data[j] = data[j+1];
						data[j+1] = reg;
					}
				}
			}
		}
		//
		bool operator>(win1 &win){
			if((data[0]<win.data[0])&&(data[1]<win.data[1]))
				return 1;
			else
				return 0;
		}
		//
		void output(bool ans,win1 win){
			bool reg[2],reg1[3];
			for(int i=0;i<2;i++){
				if((win.data[i] == win.l)&&(reg[0] != 1)){
					printf("洞長");
					reg[0] = 1;
				}
				else if((win.data[i] == win.w)&&(reg[1] != 1)){
					printf("洞寬");
					reg[1] = 1;
				}
				printf(" %d ",win.data[i]);
			}
			printf("<-- ");
			for(int i=0;i<3;i++){
				if((data[i] == l)&&(reg1[0] != 1)){
					printf("長");
					reg1[0] = 1;
				}
				else if((data[i] == w)&&(reg1[1] != 1)){
					printf("寬");
					reg1[1] = 1;
				}
				else if((data[i] == h)&&(reg1[2] != 1)){
					printf("高");
					reg1[2] = 1;
				}
				printf(" %d ",data[i]);
			}
			if(ans == 1){
				printf("\n [不通過]\n");
			}
			else{
				printf("\n [通過]\n");
			}	
		}
};


int main(void){
	win1 data1;
	win2 data2;
	//
	data1.input();
	data1.add();
	while(1){
		if(data2.input() == 0){
			break;
		}
		data2.add();
		data2.output(data2>data1,data1);
	}
	
	system("pause");
	return 0;
}
