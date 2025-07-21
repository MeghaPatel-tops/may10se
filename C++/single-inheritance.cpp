#include<iostream>
using namespace std;
class Category{
	public:
		int catid;
		char catname[20];
		void getCategory(){
			cout<<"\n Enter the value of catid and catname";
			cin>>catid>>catname;
		}
};
class Product : public Category{
	public:
		int pid;
		char pname[20];
		float price;
		
		void getProduct(){
			
		cout<<"\n enter the pid pname price";
		cin>>pid>>pname>>price;
		}
		void showProduct(){
			cout<<"\n catid="<<catid<<"\t catname="<<catname;
			cout<<"\n pid ="<<pid<<"\t productname="<<pname;
			cout<<"\n price="<<price;
		}
};
main(){
	Product p1;
	p1.getCategory();
	p1.getProduct();
	p1.showProduct();
}
