#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

class point{
	public:
		double x;
		double y;
		//
		void input(void){
			scanf("%lf %lf",&x,&y);
		}
};

class vector{
	public:
		point tail;
		point head;
		double ans;
		//
		void input(void){
			printf("tail(x,y) = ");
			tail.input();
			printf("head(x,y) = ");
			head.input();
		}
		//
		bool add(void){
			ans = sqrt(pow((tail.x-head.x),2)+pow((tail.y-head.y),2));
			if(ans == 0){
				return 1;
			}
			else{
				return 0;
			}
		}
		//
		void output(void){
			printf("Length = %lf\n",ans);
		}
};

int main(void){
	vector data;
	while(1){
		data.input();
		if(data.add() == 1){
			break;
		}
		else{
			data.output();
		}
	}
	
	system("pause");
	return 0;
}


