#include<iostream>
using namespace std;
class Parent{
	public:
		Parent(){
			cout<<"\n Parent class contrutor called";
		}
};
class Child:public Parent{
	public:
		Child(){
			cout<<"\n Child class Contructor called";
		}
};
main(){
	Child c1;
}
