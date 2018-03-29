#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

typedef struct{
	double x;
	double y;
}data;

data input(int);
double add(data,data);
void output(double);

int main(void){
	data data1,data2;
	double ans;
	while(1){
		data1 = input(1);
		data2 = input(2);
		ans = add(data1,data2);
		if(ans == 0){
			break;
		}
		output(ans);
	}
	
	system("pause");
	return 0;
}

data input(int reg){
	data data;

	printf("P%d(x,y)=",reg);
	scanf("%lf %lf",&data.x,&data.y);
	
	return data;
	
}
double add(data data1,data data2){
	double reg;
	reg = sqrt(pow((data1.x-data2.x),2)+pow((data1.y-data2.y),2));
	return reg;
}
void output(double ans){
	printf("Distance = %lf\n",ans);
	return ;
}
