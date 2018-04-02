#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

char *chartrans(char* );
char newch[2][30];

int main(void){
	char a[30],*prt;
	scanf("%s",&a);
	//printf("%s\n",a);
	prt = chartrans(&a[0]);
	printf("%s\n%s\n",prt,(prt+30));
	system("pause");
	return 0;
}

char *chartrans(char *ch){
	for(int i=0;i<30;i++){
		newch[0][i] = *(ch+i);
		newch[1][i] = *(ch+i);
	}
	strupr(newch[0]);
	strlwr(newch[1]);
	return newch[0];
}
