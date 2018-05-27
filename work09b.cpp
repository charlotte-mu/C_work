#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

class Hole{
	public:
		double length;
		double width;
		double data[2];
		//
		void input(void){
			printf("輸入牆洞之長、寬(m) = ");
			scanf("%lf %lf",&length,&width);
		}
		void add(void){
			if(length < width){
				data[0] = length;
				data[1] = width;
			}
			else{
				data[0] = width;
				data[1] = length;
			}
		}
};

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
		double data[2];
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
		void add(void){
			if((radius*2) < height){
				data[0] = (radius*2);
				data[1] = height;
			}
			else{
				data[0] = height;
				data[1] = (radius*2);
			}
		}
		void output(Hole reg1){
			bool reg2[2],reg3[2],ans;
			if((radius*2) <= reg1.data[0] && (radius*2) <= reg1.data[1]){
				ans = 1;
			}
			else if(data[0] <= reg1.data[0] && data[1] <= reg1.data[1]){
				ans = 1;
			}
			else{
				ans = 0;
			}
			if(ans){
				printf("PASS! ");
			}
			else{
				printf("CANNOT PASS! ");
			}
			for(int i=0;i<2;i++){
				if(data[i] == (radius*2) && reg2[0] == 0){
					printf("直徑 %.0lf ",data[i]);
					reg2[0] = 1;
				}
				if(data[i] == height && reg2[1] == 0){
					printf("高 %.0lf ",data[i]);
					reg2[1] = 1;
				}
			}
			if(ans){
				printf("<= ");
			}
			else{
				printf("> ");
			}
			for(int i=0;i<2;i++){
				if(reg1.data[i] == reg1.width && reg3[0] == 0){
					printf("洞寬 %.0lf ",reg1.data[i]);
					reg3[0] = 1;
				}
				if(reg1.data[i] == reg1.length && reg3[1] == 0){
					printf("洞長 %.0lf ",reg1.data[i]);
					reg3[1] = 1;
				}
			}
			printf("\n");
		}
};

int main(void){
	Cylinder data;
	Hole data2;
	data2.input();
	data2.add();
	while(1){
		data.in1();
		if(data.in2() == 1){
			break;
		}
		if(data.input() == 1){
			break;
		}
		data.add();
		data.output(data2);
	}
	system("pause");
	return 0;
}

