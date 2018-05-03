#include<iostream>
#include<cstdlib>
#include <math.h>
using namespace std;

class Location{
	private:
		
	public:
		double x;
		double y;
};

class polar{
	private:
		Location city[10]; 
	public:
		bool input(void){
			int i;
			printf("Number of cities:");
			scanf("%d",&i);
			if(i == 0)
				return 0;
			for(int j=0;j<i;j++){
				printf("Enter (x,y) of City %d:",j);
				scanf("%lf %lf",&city[j].x,&city[j].y);
			}
			return 1;
		}
		//
		bool add(void){
			int a,b;
			printf("Find the distance between two cities:");
			scanf("%d %d",&a,&b);
			if(a == b)
				return 0;
			printf("Length = %lf\n",sqrt(pow((city[a].x-city[b].x),2)+pow((city[a].y-city[b].y),2)));
			return 1;
		}
};

int main(void){
	polar data;
	bool i;
	//
	i = data.input();
	while(i){
		if(data.add() == 0)
			break;
	}
	system("pause");
	return 0;
}
