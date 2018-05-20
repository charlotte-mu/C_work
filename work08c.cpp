#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

class point{
	public:
		double x;
		double y;
		//
		void in(void){
			printf("(x,y) = ");
			scanf("%lf %lf",&x,&y);
		}
};

class Circle : public point{
	public:
		double radius;
		//
		bool input(void){
			printf("Radius = ");
			scanf("%lf",&radius);
			if(radius <= 0){
				return 1;
			}
			else{
				return 0;
			}
		}
		//
		bool output(Circle data){
			double ans;
			ans = sqrt(pow((data.x-x),2)+pow((data.y-y),2));
			if(ans <= (radius + data.radius)){
				printf("(%.2lf,%.2lf) R(%.2lf) intersects with (%.2lf,%.2lf) R(%.2lf) with d = %lf\n",data.x,data.y,data.radius,x,y,radius,ans);
			}
			else{
				printf("(%.2lf,%.2lf) R(%.2lf) does not intersects with (%.2lf,%.2lf) R(%.2lf) with d = %lf\n",data.x,data.y,data.radius,x,y,radius,ans);
			}
			return 0;
		}
};

int main(void){
	Circle data1,data2;
	data1.in();
	if(data1.input() == 1){
		system("pause");
		return 0;
	}
	while(1){
		data2.in();
		if(data2.input() == 1){
			break;
		}
		data1.output(data2);
	}
	system("pause");
	return 0;
}
