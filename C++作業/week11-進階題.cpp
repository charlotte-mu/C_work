#include<iostream>
#include<cstdlib>
using namespace std;

#define size 100

int main(void){
	char a[size],b[size/2][4];
	int j=0,k=0,ans,o;
	scanf("%s",&a);
	for(int i=0;i<size;i++){
		if(a[i] == 42 || a[i] == 43 || a[i] == 45 || a[i] == 47){
			j = j+1;
			k=0;	}
		else{
			b[j][k] = a[i];
			k=k+1;
		}
	}
	j=1;
	ans=atoi(b[0]);
		for(int i=0;i<size;i++){
		if(a[i] == 42 || a[i] == 43 || a[i] == 45 || a[i] == 47){
			switch(a[i]){
				case 42:ans=ans * atoi(b[j++]); break;
				case 43:ans=ans + atoi(b[j++]); break;
				case 45:ans=ans - atoi(b[j++]); break;
				case 47:ans=ans / atoi(b[j++]); break;
			}
		}
	}
	printf("%d\n",ans);
	printf("\n");
	for(int i=0;i<(size/2);i++){
		printf("%d	",atoi(b[i]));
	}
	printf("\n");
	system("pause");
	return 0;
}

