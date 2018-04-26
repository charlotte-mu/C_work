#include<iostream>
#include<cstdlib>
#include <math.h>
using namespace std;

class polar{
	private:
		double r[2];
		double theta[2];
	public:
		bool input(int i){
			printf("radius=");
			scanf("%lf",&r);
			if(r==0)
				return 0;
			printf("theta (in degree)=");
			scanf("%lf",&theta);
			return 1;
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
	polar data;
	//
	while(1){
		if(data.input() == 0)
			break;
		data.add();
	}
	system("pause");
	return 0;
}


