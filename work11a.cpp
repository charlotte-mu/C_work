#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(int argc , char *argv[]){
	ofstream ofile(argv[1],ios::app);
	if(ofile.is_open()){
		char data[80];
		printf("OK\n");
		while(1){
			cin.get(data,80);
			cin.get();
			if(data[0] == '\0'){
				break;
			}
			ofile << data << endl;
			
		}
	}
	else{
		printf("ERROR\n");
	}
	ofile.close();

	system("pause");
	return 0;
}

