#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

char *chartrans(char *);

int main(void){
	char ch[30],*a;	//�Ыئr���}�Cch�P�r�����A������a 
	cout << "�п�J�^��" << endl;
	cin >> ch;	//�N��J���r��s�Jch 
	a = chartrans(ch);	//�Nch���жǤJchartrans�禡 �A�æ^�Ǥ@�ӫ��Цs�Ja 
	cout << a << endl;	//��X����a�ҫ��V���O���餤�����e 
	system("pause");
	return 0;
}

char *chartrans(char *ch){
	char newch[30];	//�Ыئr���}�Cnewch
	for(int i=0;i<30;i++){
		newch[i] = *(ch+i);	 //�N����ch+i �ҫ��V���O���餤�����e �s�J�r���}�C newch��i���� 
	}
	strupr(newch);	//�N�r���}�C�����r���ഫ���j�g 
	return newch;	//�^�Ǧr���}�Cnewch�����Ц�m 
}
