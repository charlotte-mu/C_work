#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct{
	int d[3];
}reg;

class win{
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
		reg add(void){
			int a;
			reg reg;
			reg.d[0] = l;
			reg.d[1] = w;
			reg.d[2] = h;
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
		//
		void output(reg ans){
			for(int i=0;i<3;i++){
				if(ans.d[i]== l){
					printf("長 %d ",ans.d[i]);
				}
				else if(ans.d[i]==w){
					printf("寬 %d ",ans.d[i]);
				}
				else if(ans.d[i]== h){
					printf("高 %d ",ans.d[i]);
				}
			}
			printf("\n");
			return ;
		}
};



int main(void){
	int data;
	reg ans;
	win test;
	
	while(1){
		data = test.input();
		if(data == 0){
			break;
		}
		ans = test.add();
		test.output(ans);
	}
	
	system("pause");
	return 0;
}

