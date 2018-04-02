#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

char *chartrans(char *);

int main(void){
	char ch[30],*a;	//創建字元陣列ch與字元型態的指標a 
	cout << "請輸入英文" << endl;
	cin >> ch;	//將輸入的字串存入ch 
	a = chartrans(ch);	//將ch指標傳入chartrans函式 ，並回傳一個指標存入a 
	cout << a << endl;	//輸出指標a所指向的記憶體中的內容 
	system("pause");
	return 0;
}

char *chartrans(char *ch){
	char newch[30];	//創建字元陣列newch
	for(int i=0;i<30;i++){
		newch[i] = *(ch+i);	 //將指標ch+i 所指向的記憶體中的內容 存入字元陣列 newch第i項中 
	}
	strupr(newch);	//將字元陣列中的字元轉換成大寫 
	return newch;	//回傳字元陣列newch的指標位置 
}
