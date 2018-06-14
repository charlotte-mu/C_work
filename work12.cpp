#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(void){
	char data[8],reg[80];
	int i;
	printf("Correct Code =");
	scanf("%s",data);
	cin.get();
	while(1){
		try{
			printf("Enter Code:");
			cin.getline(reg,80);
			i = strlen(reg);
			if(i == 0){
				printf("請重新輸入\n");
			}
			else if(i<8){
				throw "String too short!";
			}
			else if(i>8){
				throw "String too long!";
			}
			else{
				int a=0;
				for(int j=0;j<8;j++){
					if(reg[j] == data[j]){
						a++;
					}
				}
				if(a == 8){
					printf("\n>> Code Correct!\n\n");
					break;
				}
				else{
					printf("錯誤請重新輸入\n");
				}
			}
		}
		catch(const char *str){
			printf("%s\n",str);
		}
	}
	
	
	system("pause");
	return 0;
}


