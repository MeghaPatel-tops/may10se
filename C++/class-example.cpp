#include<iostream>
using namespace std;
class Product{
	private:
	//data member
	int pid;//4
	char pname[30];//30
	float price;//4
	
	public:
	//member function
	void getProduct(){
		cout<<"\n enter thge value of pid pname price";
		cin>>pid>>pname>>price;
	}
	
	void showProduct(){
		cout<<"\n pid="<<pid;
		cout<<"\n pname="<<pname;
		cout<<"\n price="<<price;
	}
};
main(){
	Product p1,p2;
	p1.getProduct();
	p1.showProduct();
	cout<<p1.price;
}
