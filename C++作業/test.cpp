#include<iostream>
#include<cstdlib>
#include<cstring>

int main(void){
	char *a;
	int j=0,k=0,ans,g;
	int  l;
	a=(char *)malloc(1000);
	scanf("%s",a);
	g = strlen(a);
	char b[g/2+1][4];
	l = 0;
	for(int i=0;i<g;i++){
		if(a[i] == 42 || a[i] == 43 || a[i] == 45 || a[i] == 47){
			j = j+1;
			k = 0;
			}
		else{
			b[j][k] = a[i];
			k=k+1;
		}
	}
	l = j;
	j=1;
	ans=atoi(b[0]);
		for(int i=0;i<g;i++){
		if(a[i] == 42 || a[i] == 43 || a[i] == 45 || a[i] == 47){
			switch(a[i]){
				case 42:ans=ans * atoi(b[j++]); break;
				case 43:ans=ans + atoi(b[j++]); break;
				case 45:ans=ans - atoi(b[j++]); break;
				case 47:ans=ans / atoi(b[j++]); break;
			}
		}
	}
	printf("ans=%d\n",ans);
	printf("\n");
	for(int i=0;i<l+1;i++){
		printf("%d	",atoi(b[i]));
	}
	printf("\n");
	delete a;
	a = NULL;
	system("pause");
	return 0;
}
