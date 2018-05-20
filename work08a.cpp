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
		void output(void){
			printf("Length = %lf\n",(radius*2*3.14159));
			printf("Area = %lf\n",(radius*3.14159));
		}
};

int main(void){
	Circle data;
	while(1){
		data.in();
		if(data.input() == 1){
			break;
		}
		else{
			data.output();
		}
	}
	system("pause");
	return 0;
}


