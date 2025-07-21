#include<iostream>
#include<fstream>
using namespace std;

main(){
	char data[100];
	fstream f1;
	f1.open("hello.txt",ios::out);
	f1<<"hello wolrd";
	f1.close();
	
	f1.open("hello.txt",ios::in);
	f1.getline(data,10);
	cout<<"\n reading data from file="<<data;
	f1.close();
}
