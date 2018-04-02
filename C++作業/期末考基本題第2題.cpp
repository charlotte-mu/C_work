#include<iostream>
#include<cstdlib>
using namespace std;

int main(void){
	int min,a[2][2][3]={{{79,45,12},
	{59,56,23}},
	{{74,85,96},
	{41,52,63}}};	//宣告個一個整數型態的變數min，和 宣告個一個整數型態的2*2*3陣列a並且存入定值 
	min = a[0][0][0];	//將min的值更改為a陣列的[0][0][0]項 
	for(int i=0;i<2;i++)	//巢狀迴圈 3層 (2*2*3) 
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<3;k++)
			{
				cout << "a[" << i << "][" << j << "][" << k << "]=" << a[i][j][k] << endl;	//輸出陣列a中第[i][j][k]項 
				if(min > a[i][j][k])	//判斷 陣列a中第[i][j][k]項是否小於min，如果是就將陣列a中第[i][j][k]項儲存至min 
				{
					min = a[i][j][k];	//將陣列a中第[i][j][k]項儲存至min 
				}
			}
		}
	}
	cout << "min=" << min << endl;	//輸出min 
	system("pause");
	return 0;
}

