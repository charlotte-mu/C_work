#include<iostream>
#include<cstdlib>
using namespace std;

int main(void){
	int min,a[2][2][3]={{{79,45,12},
	{59,56,23}},
	{{74,85,96},
	{41,52,63}}};	//�ŧi�Ӥ@�Ӿ�ƫ��A���ܼ�min�A�M �ŧi�Ӥ@�Ӿ�ƫ��A��2*2*3�}�Ca�åB�s�J�w�� 
	min = a[0][0][0];	//�Nmin���ȧ�אּa�}�C��[0][0][0]�� 
	for(int i=0;i<2;i++)	//�_���j�� 3�h (2*2*3) 
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<3;k++)
			{
				cout << "a[" << i << "][" << j << "][" << k << "]=" << a[i][j][k] << endl;	//��X�}�Ca����[i][j][k]�� 
				if(min > a[i][j][k])	//�P�_ �}�Ca����[i][j][k]���O�_�p��min�A�p�G�O�N�N�}�Ca����[i][j][k]���x�s��min 
				{
					min = a[i][j][k];	//�N�}�Ca����[i][j][k]���x�s��min 
				}
			}
		}
	}
	cout << "min=" << min << endl;	//��Xmin 
	system("pause");
	return 0;
}

