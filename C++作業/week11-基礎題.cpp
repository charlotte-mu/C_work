#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(void){
	int b;
	char a[50];
	cin.getline(a,50);
	b = strlen(a);
	for(int i=0;i<b;i++){
		if(a[i] >= 48 && a[i] <= 57)
			cout<<a[i];
	}
	cout<<endl;
	strupr(a);
	cout<<a<<endl;
	strrev(a);
	cout<<a<<endl;
	cout<<endl;
	system("pause");
	return 0;
}

