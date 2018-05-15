#include<iostream>
#include<cstdlib>
#include <math.h>
using namespace std;

class point{
	private:
		double x;
		double y;
	public:
		void input(double r,double theta){
			x = r*(cos(theta/180*3.1415));
			y = r*(sin(theta/180*3.1415));
		}
		point operator+(point &data){
			point ans;
			ans.x = this->x + data.x;
			ans.y = this->y + data.y;
			return ans;
		}
		double out_r(void){
			return sqrt(pow(x,2)+pow(y,2));
		}
		double out_theta(void){
			return atan((y/x))*180/3.1415;
		}
};

class polar{
	private:
		double r;
		double theta;
	public:
		bool input(void){
			printf("radius=");
			scanf("%lf",&r);
			if(r==0)
				return 0;
			printf("theta (in degree)=");
			scanf("%lf",&theta);
			return 1;
		}
		//
		polar operator+(polar &data){
			polar ans;
			point reg,data1,data2;
			data1.input(r,theta);
			data2.input(data.r,data.theta);
			reg = data1 + data2;
			ans.r = reg.out_r();
			ans.theta = reg.out_theta();
			return ans;
		}
		//
		void output(polar data1,polar data2,polar ans){
			printf("%.0lf/_%.0lf+%.0lf/_%.0lf = %lf/_%lf\n\n",data1.r,data1.theta,data2.r,data2.theta,ans.r,ans.theta);
		}
};

int main(void){
	polar data1,data2,ans;
	//
	while(1){
		if(data1.input() == 0)
			break;
		if(data2.input() == 0)
			break;
		ans = data1 + data2;
		ans.output(data1,data2,ans);
	}
	system("pause");
	return 0;
}
