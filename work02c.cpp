#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

typedef struct{
	double x;
	double y;
}point;

typedef struct{
	point a;
	point b;
}vector;

vector input(char);
vector count1(vector,vector);
double count2(vector);
void output(vector,double);

int main(void){
	vector data1,data2,ans;
	double reg;
	while(1){
		data1 = input('A');
		if(sqrt(pow((data1.a.x-data1.b.x),2)+pow((data1.a.y-data1.b.y),2))==0){
			break;
		}
		data2 = input('B');
		if(sqrt(pow((data2.a.x-data2.b.x),2)+pow((data2.a.y-data2.b.y),2))==0){
			break;
		}
		ans = count1(data1,data2);
		reg = count2(ans);
		output(ans,reg);
	}
	
	system("pause");
	return 0;
}

vector input(char reg){
	vector data;
	
	printf("%c->\n",reg);
	printf("Tail(x,y)=");
	scanf("%lf %lf",&data.a.x,&data.a.y);
	printf("Head(x,y)=");
	scanf("%lf %lf",&data.b.x,&data.b.y);
	
	return data;
	
}
vector count1(vector data1,vector data2){
	vector ans;
	ans.a = data1.a;
	ans.b.x = (data2.b.x-data2.a.x)+data1.b.x;
	ans.b.y = (data2.b.y-data2.a.y)+data1.b.y;
	return ans;
}
double count2(vector data){
	double reg;
	reg = sqrt(pow((data.a.x-data.b.x),2)+pow((data.a.y-data.b.y),2));
	return reg;
}
void output(vector ans,double reg){
	printf("(A+B)->(%.0lf,%.0lf)->(%.0lf,%.0lf)\n",ans.a.x,ans.a.y,ans.b.x,ans.b.y);
	printf("Length of vector = %lf\n",reg);
	return ;
}
