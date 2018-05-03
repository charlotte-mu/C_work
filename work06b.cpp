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
		double data[10][10];
		int i;
	public:
		bool input(void){
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
		void add(void){
			for(int a=0;a<i;a++){
				for(int b=0;b<i;b++){
					data[a][b] = sqrt(pow((city[a].x-city[b].x),2)+pow((city[a].y-city[b].y),2));
				}
			}
		}
		//
		bool out(void){
			int reg,reg1,reg2;
			double ans,min;
			bool d[i];
			printf("Start from the city:");
			scanf("%d",&reg);
			reg2 = reg;
			if(reg == i)
				return 0;
			printf("[%d] = (%.0lf,%.0lf)\n",reg,city[reg].x,city[reg].y);
			for(int a=0;a<i-1;a++){	
				d[reg] = 1;
				for(int j=0;j<i;j++){
					if(d[j] == 0){
						min = data[reg][j];
						reg1 = j;
						d[reg1] = 1;
						break;
					}
				}
			//	printf("A%d %d %d %d %d\n",d[0],d[1],d[2],d[3],d[4]);
				for(int b=0;b<i;b++){
					if(d[b] == 0){
					//	printf("B%d %d %d %d %d\n",d[0],d[1],d[2],d[3],d[4]);
					//	printf("%lf\n",min);
						if(min > data[reg][b]){
							min = data[reg][b];
							d[reg1] = 0;
							d[b] = 1;
							reg1 = b;
						}
					}
				}
			//	printf("%d %d %d %d %d\n",d[0],d[1],d[2],d[3],d[4]);
				ans = ans + data[reg][reg1];
				printf("[%d] = (%.0lf,%.0lf) - %lf\n",reg1,city[reg1].x,city[reg1].y,data[reg][reg1]);
				reg = reg1;
			}
			printf("[%d] = (%.0lf,%.0lf) - %lf\n",reg2,city[reg2].x,city[reg2].y,data[reg][reg2]);
			ans = ans + data[reg][reg2];
			printf("Total distance = %lf\n",ans);
			for(int j=0;j<i;j++){
				d[j] = 0;
			}
			ans = 0;
			return 1;
		}
};

int main(void){
	polar data;
	bool i;
	//
	i = data.input();
	data.add();
	while(i){
		if(data.out() == 0)
			break;
	}
	system("pause");
	return 0;
}
