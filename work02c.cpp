#include<iostream>
#include<cstdlib>
#include<math.h>
#include<cmath>
using namespace std;

typedef struct{
	double x;
	double y;
}point;

typedef struct{
	double r;
	double theta;
}polar;

vector input(void);
vector add(vector,double,double);
void output(vector);

int main(void){
	vector data,ans;
	double x,y;
	while(1){
		data = input();
		if(sqrt(pow((data.a.x-data.b.x),2)+pow((data.a.y-data.b.y),2))==0){
			break;
		}
		printf("(x,y)=");
		scanf("%lf %lf",&x,&y);
		ans = add(data,x,y);
		output(ans);
	}
	
	system("pause");
	return 0;
}

vector input(void){
	vector data;
	
	printf("A->\n");
	printf("Tail(x,y)=");
	scanf("%lf %lf",&data.a.x,&data.a.y);
	printf("Head(x,y)=");
	scanf("%lf %lf",&data.b.x,&data.b.y);
	
	return data;
	
}
vector add(vector data,double x,double y){
	vector ans;
	double regx,regy;
	ans.a.x = x;
	ans.a.y = y;
	regx = data.b.x - data.a.x;
	regy = data.b.y - data.a.y;
	ans.b.x = x + regx;
	ans.b.y = y + regy;
	ans.ans = sqrt(pow((data.a.x-data.b.x),2)+pow((data.a.y-data.b.y),2));
	return ans;
}
void output(vector ans){
	printf("New A-> (%.0lf,%.0lf) -> (%.0lf,%.0lf)\n",ans.a.x,ans.a.y,ans.b.x,ans.b.y);
	printf("Length of vector = %lf\n",ans.ans);
	return ;
}
