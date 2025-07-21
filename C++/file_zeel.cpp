#include<iostream>
#include<fstream>
using namespace std;
main(){
	char data[50];
	fstream f1;
	f1.open("zeel.text",ios::app);
	f1<<" hello zeel";
	f1.close();
	
	f1.open("zeel.text",ios::in);
	f1.getline(data,50);
	//f1>>data;
	cout<<data;
	f1.close();
	
}
