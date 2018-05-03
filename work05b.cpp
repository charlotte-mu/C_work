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
			scanf("%lf",&r[i]);
			if(r[i]==0)
				return 0;
			printf("theta (in degree)=");
			scanf("%lf",&theta[i]);
			return 1;
		}
		//
		void add(void){
			double ans;
			ans = sqrt(pow(r[0],2)+pow(r[1],2)-
			(2*r[0]*r[1]*cos((theta[0]/180*3.1415)-(theta[1]/180*3.1415))));
			printf("%.0lf/_%.0lf<-->%.0lf/_%.0lf = %lf\n\n",r[0],theta[0],r[1],theta[1],ans);
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


