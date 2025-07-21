#include<iostream>
using namespace std;
class Parent{
	public:
	  virtual void display(){
			cout<<"\n parent class display method called";
		}
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
