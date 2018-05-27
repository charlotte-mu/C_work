#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

class point{
	public:
		double x;
		double y;
		double z;
		//
		void in1(void){
			printf("(x,y,z) = ");
			scanf("%lf %lf %lf",&x,&y,&z);
		}
};

class Circle : public point{
	public:
		double radius;
		//
		bool in2(void){
			printf("Radius = ");
			scanf("%lf",&radius);
			if(radius <= 0){
				return 1;
			}
			else{
				return 0;
			}
		}
};

class Cylinder : public Circle{
	public:
		double height;
		//
		bool input(void){
			printf("height = ");
			scanf("%lf",&height);
			if(height <= 0){
				return 1;
			}
			else{
				return 0;
			}
		}
		//
		void output(void){
			printf("Area = %lf\n",((radius*radius*2*3.14159)+(radius*2*3.14159*height)));
			printf("Volume = %lf\n",(radius*radius*3.14159*height));
		}
};

int main(void){
	Cylinder data;
	while(1){
		data.in1();
		if(data.in2() == 1){
			break;
		}
		if(data.input() == 1){
			break;
		}
		data.output();
	}
	system("pause");
	return 0;
}


