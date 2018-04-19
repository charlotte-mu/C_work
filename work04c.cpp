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
		//
		void input(char i){
			printf("%c ->\n",i);
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
		point add2(vector reg){
			point ans;
			ans.x = (head.x-tail.x)+reg.head.x;
			ans.y = (head.y-tail.y)+reg.head.y;
			return ans;
		}
		//
		void output(point ans){
			printf("(A+B)-> (%.0lf,%.0lf) -> (%.0lf,%.0lf)\n",tail.x,tail.y,ans.x,ans.y);
			printf("Length = %lf\n",sqrt(pow((tail.x-ans.x),2)+pow((tail.y-ans.y),2)));
		}
};

int main(void){
	vector data1,data2;
	point ans;
	while(1){
		data1.input('A');
		if(data1.add1() == 1){
			break;
		}
		data2.input('B');
		if(data2.add1() == 1){
			break;
		}
		ans = data2.add2(data1);
		data1.output(ans);
	}
	
	system("pause");
	return 0;
}

