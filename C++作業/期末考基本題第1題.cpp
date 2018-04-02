#include<iostream>
#include<cstdlib>
using namespace std;

int main(void){
	int data;	//宣告個一個整數型態的變數 data
	while(1){	//死迴圈 說明:括弧中的運算式成立為1就執行大括弧中的內容 
		cout << "請輸入一周1~7天的第幾天" << endl; 	//輸出字串 
		cin >> data;	//將輸入值傳入變數data中 
		switch(data){	//多重選擇敘述 在括弧內的值會對應到case後的值，如果一樣就會執行case後的敘述，都沒有一樣則會執行 default後的敘述。 
			case 1: cout << "一周1~7天的第1天是星期一:工作日" << endl; break; 	//break用來跳離多重選擇敘述 
			case 2: cout << "一周1~7天的第2天是星期二:工作日" << endl; break;
			case 3: cout << "一周1~7天的第3天是星期三:工作日" << endl; break;
			case 4: cout << "一周1~7天的第4天是星期四:工作日" << endl; break;
			case 5: cout << "一周1~7天的第5天是星期五:工作日" << endl; break;
			case 6: cout << "一周1~7天的第6天是星期六:假日" << endl; break;
			case 7: cout << "一周1~7天的第7天是星期天:假日" << endl; break;
			default: cout << "一周1~7天的第" << data << "天是不存在" << endl; break;
		}
	}
	system("pause");
	return 0;
}

