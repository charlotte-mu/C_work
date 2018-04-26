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
		point add(point data){
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
		double r[2];
		double theta[2];
	public:
		bool input(int i){
			printf("radius=");
			scanf("%lf",&r[i]);
			if(r[i]==0)
				return 0;
			printf("theta (in degree)=");
			scanf("%lf",&theta[i]);
			return 1;
		}
		//
		void add(void){
			point ans,data1,data2;
			data1.input(r[0],theta[0]);
			data2.input(r[1],theta[1]);
			ans = data2.add(data1);
			printf("%.0lf/_%.0lf+%.0lf/_%.0lf = %lf/_%lf\n\n",r[0],theta[0],r[1],theta[1],ans.out_r(),ans.out_theta());
		}
};

int main(void){
	polar data;
	//
	while(1){
		if(data.input(0) == 0)
			break;
		if(data.input(1) == 0)
			break;
		data.add();
	}
	system("pause");
	return 0;
}


