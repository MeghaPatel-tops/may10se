#include<iostream>
using namespace std;
class Parent{
	public:
	  virtual void display()=0;//pure virtual
};
class Child:public Parent{
	public:
		void display(){
			cout<<"\n child class display method called";
		}
};
main(){
	Child c1;
	c1.display();
}
