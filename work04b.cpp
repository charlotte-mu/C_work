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
		point ans;
		double ans2;
		point reg;
		//
		void input(void){
			printf("A ->\n");
			printf("tail(x,y) = ");
			tail.input();
			printf("head(x,y) = ");
			head.input();
		}
		//
		bool add1(void){
			ans2 = sqrt(pow((tail.x-head.x),2)+pow((tail.y-head.y),2));
			if(ans2 == 0){
				return 1;
			}
			else{
				return 0;
			}
		}
		//
		void add2(void){
			printf("(x,y) = ");
			reg.input();
			ans.x = (head.x-tail.x)+reg.x;
			ans.y = (head.y-tail.y)+reg.y;
		}
		//
		void output(void){
			printf("New A-> (%.0lf,%.0lf) -> (%.0lf,%.0lf)\n",reg.x,reg.y,ans.x,ans.y);
			printf("Length = %lf\n",ans2);
		}
};

int main(void){
	vector data;
	while(1){
		data.input();
		if(data.add1() == 1){
			break;
		}
		else{
			data.add2();
			data.output();
		}
	}
	
	system("pause");
	return 0;
}

