#include<iostream>
#include<cstdlib>
using namespace std;

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
		int add(void){
			int ans;
			ans = h*l*w;
			return ans;
		}
		//
		void output(int ans){
			printf("體積 = %d\n",ans);
			return ;
		}
};

void output(int);

int main(void){
	int data;
	int ans;
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





