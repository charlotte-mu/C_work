#include<iostream>
#include<cstdlib>
#include <math.h>
using namespace std;

class point{
	private:
		double x;
		double y;
	public:
		void input(void){
			printf("(x,y)=");
			scanf("%lf %lf",&x,&y);
		}
		//
		void add(void){
			double r,theta;
			r = sqrt(pow(x,2)+pow(y,2));
			theta = atan((y/x))*180/3.1415;
			if(theta<0)
				theta += 180;
			printf("(%.0lf,%.0lf)-->%lf/_%.0lf\n",x,y,r,theta);
		}
};

class polar{
	private:
		double r;
		double theta;
	public:
		void input(void){
			printf("radius=");
			scanf("%lf",&r);
			printf("theta (in degree)=");
			scanf("%lf",&theta);
		}
		//
		void add(void){
			double x,y;
			x = r*(cos(theta/180*3.1415));
			y = r*(sin(theta/180*3.1415));
			printf("%.0lf/_%.0lf-->(%lf,%lf)\n",r,theta,x,y);
		}
};

int main(void){
	point data1;
	polar data2;
	int con;
	//
	while(1){
		printf("0-Quit\n");
		printf("1-XY Coordinates\n");
		printf("2-Polar Coordinates\n");
		scanf("%d",&con);
		if(con == 0)
			break;
		else if(con == 1){
			data1.input();
			data1.add();
		}
		else if(con == 2){
			data2.input();
			data2.add();
		}
		else
			printf("Error\n");
		printf("Press any key to continue ...\n");
	}
	system("pause");
	return 0;
}


