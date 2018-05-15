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
		//
		bool input(char i){
			printf("%c ->\n",i);
			printf("tail(x,y) = ");
			tail.input();
			printf("head(x,y) = ");
			head.input();
			if(sqrt(pow((tail.x-head.x),2)+pow((tail.y-head.y),2)) == 0){
				return 1;
			}
			else{
				return 0;
			}
		}
		//
		vector operator+(vector &data){
			vector ans;
			ans.head.x = (data.head.x-data.tail.x)+head.x;
			ans.head.y = (data.head.y-data.tail.y)+head.y;
			ans.tail.x = tail.x;
			ans.tail.y = tail.y;
			return ans;
		}
		//
		/*void operator=(vector& data){
			head.x = data.head.x;
			head.y = data.head.y;
			tail.x = data.tail.x;
			tail.y = data.tail.y;
		}*/
		//
		void output(void){
			printf("(A+B)-> (%.0lf,%.0lf) -> (%.0lf,%.0lf)\n",tail.x,tail.y,head.x,head.y);
			printf("Length = %lf\n",sqrt(pow((tail.x-head.x),2)+pow((tail.y-head.y),2)));
		}
};

int main(void){
	vector data1,data2,ans;
	while(1){
		if(data1.input('A') == 1){
			break;
		}
		if(data2.input('B') == 1){
			break;
		}
		ans = data1 + data2;
		ans.output();
	}
	
	system("pause");
	return 0;
}
