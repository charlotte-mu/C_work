#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(int argc , char *argv[]){
	ifstream ofile(argv[1],ios::in);
	if(ofile.is_open()){
		char data[80];
		while(!ofile.eof()){
			ofile.getline(data,80,'\n');
			printf("%s\n",data);
		}
	}
	else{
		printf("ERROR\n");
	}
	ofile.close();

	system("pause");
	return 0;
}

