#include<iostream>
#include<cstdlib>
using namespace std;

int main(void){
	int data;	//�ŧi�Ӥ@�Ӿ�ƫ��A���ܼ� data
	while(1){	//���j�� ����:�A�������B�⦡���߬�1�N����j�A���������e 
		cout << "�п�J�@�P1~7�Ѫ��ĴX��" << endl; 	//��X�r�� 
		cin >> data;	//�N��J�ȶǤJ�ܼ�data�� 
		switch(data){	//�h����ܱԭz �b�A�������ȷ|������case�᪺�ȡA�p�G�@�˴N�|����case�᪺�ԭz�A���S���@�˫h�|���� default�᪺�ԭz�C 
			case 1: cout << "�@�P1~7�Ѫ���1�ѬO�P���@:�u�@��" << endl; break; 	//break�ΨӸ����h����ܱԭz 
			case 2: cout << "�@�P1~7�Ѫ���2�ѬO�P���G:�u�@��" << endl; break;
			case 3: cout << "�@�P1~7�Ѫ���3�ѬO�P���T:�u�@��" << endl; break;
			case 4: cout << "�@�P1~7�Ѫ���4�ѬO�P���|:�u�@��" << endl; break;
			case 5: cout << "�@�P1~7�Ѫ���5�ѬO�P����:�u�@��" << endl; break;
			case 6: cout << "�@�P1~7�Ѫ���6�ѬO�P����:����" << endl; break;
			case 7: cout << "�@�P1~7�Ѫ���7�ѬO�P����:����" << endl; break;
			default: cout << "�@�P1~7�Ѫ���" << data << "�ѬO���s�b" << endl; break;
		}
	}
	system("pause");
	return 0;
}

