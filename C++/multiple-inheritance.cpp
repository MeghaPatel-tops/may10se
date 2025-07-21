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
class Brand{
	public:
		int bid;
		char bname[20];
		getBrandData(){
			cout<<"\n Enter bid and bname";
			cin>>bid>>bname;
		}
};
class Product : public Category,protected Brand{
	public:
		int pid;
		char pname[20];
		float price;
		
		void getProduct(){
	     this->getBrandData();
		cout<<"\n enter the pid pname price";
		cin>>pid>>pname>>price;
		}
		void showProduct(){
			cout<<"\n catid="<<catid<<"\t catname="<<catname;
			cout<<"\n barndid="<<bid<<"\t brandname="<<bname;
			cout<<"\n pid ="<<pid<<"\t productname="<<pname;
			cout<<"\n price="<<price;
		}
};
main(){
	Product p1;
	p1.getCategory();
	//p1.getBrandData();
	p1.getProduct();
	p1.showProduct();

}
