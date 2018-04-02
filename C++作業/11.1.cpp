#include<iostream>
#include<cstdlib>
using namespace std;

struct abc {
	int sex;
	char name[50];
};

int main(void){
	struct abc cat[2],dog;
	cat[0].sex = 0;
	cat[1].sex = 50;
	dog.sex = 1;
	scanf("%s",&dog.name);
	printf("%d\n",cat[0].sex);
	printf("%d\n",dog.sex);
	printf("%d\n",cat[1].sex);
	printf("%s\n",dog.name);
	
	system("pause");
	return 0;
}

