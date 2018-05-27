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
			printf("Cylinder:\n(x,y,z) = ");
			scanf("%lf %lf %lf",&x,&y,&z);
		}
		bool in(void){
			printf("P(x,y,z) = ");
			scanf("%lf %lf %lf",&x,&y,&z);
			if(x == 0 && y == 0 && z == 0){
				return 1;
			}
			else{
				return 0;
			}
		}
};

class Circle : public point{
	public:
		double radius;
		//
		void in2(void){
			printf("Radius = ");
			scanf("%lf",&radius);
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
		void output(point reg){
			if(sqrt(pow((reg.x-x),2)+pow((reg.y-y),2)) <= radius && (reg.z - z) <= height && reg.z >= z){
				printf("Inside!\n");
			}
			else{
				printf("Outside!\n");
			}
		}
};

int main(void){
	Cylinder data;
	point data2;
	data.in1();
	data.in2();
	if(data.input() == 1){
		return 0;
	}
	while(1){
		if(data2.in() == 1){
			break;
		}
		data.output(data2);
	}
	system("pause");
	return 0;
}


