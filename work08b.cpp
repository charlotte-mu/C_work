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
		bool output(void){
			point reg;
			double ans;
			printf("(x,y) = ");
			scanf("%lf %lf",&reg.x,&reg.y);
			if((reg.x == x)&&(reg.y == y)){
				return 1;
			}
			ans = sqrt(pow((reg.x-x),2)+pow((reg.y-y),2));
			if(ans <= radius){
				printf("(%.2lf,%.2lf) is inside of (%.2lf,%.2lf) R(%.2lf) with d = %lf\n",reg.x,reg.y,x,y,radius,ans);
			}
			else{
				printf("(%.2lf,%.2lf) is outside of (%.2lf,%.2lf) R(%.2lf) with d = %lf\n",reg.x,reg.y,x,y,radius,ans);
			}
			return 0;
		}
};

int main(void){
	Circle data;
	data.in();
	if(data.input() == 1){
		system("pause");
		return 0;
	}
	while(1){
		if(data.output() == 1){
			break;
		}
	}
	system("pause");
	return 0;
}
