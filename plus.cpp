#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char *argv[]){	
	int a,b;
	
	if(argc != 3){
		cout << "error\n";
		return 1;
	}
	else{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		cout << a+b << "\n";
		return 0;
	}		
}




