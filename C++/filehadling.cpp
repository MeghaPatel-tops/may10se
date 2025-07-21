#include<iostream>
#include<fstream>
using namespace std;
main(){
	char pname[20],data[100],ch;
	float price;
	fstream f1;
	f1.open("product.csv",ios::out);
	f1<<"ProductName,price\n";
	for(int i=1;i<=3;i++){
		cout<<"\n enter product name and price";
		cin>>pname;
		cin>>price;
		f1<<pname<<","<<price<<"\n";
	}
	f1.close();
	
	f1.open("product.csv",ios::in);
	while(ch=f1.get()){
		
		if(ch==','){
			cout<<"\t";
			continue;
		}
		cout<<ch;
		if(ch==EOF){
			break;
		}
	}
	f1.close();
	
}
