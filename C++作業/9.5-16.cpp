#include<iostream>
#include<cstdlib>
using namespace std;

void display(char*,int);
char a[50];

int main(void){
	char *s;
	int b;
	s = a;
	printf("請輸入文字:\n");
	scanf("%s",s);
	printf("請輸入數字:\n");
	scanf("%d",&b);
	display(s,b);
	printf("\n");
	
	system("pause");
	return 0;
}



void display(char *ptr,int n){
	for(int i=n-1;i<=50;i++){
		printf("%c",ptr[i]);
	}
}

