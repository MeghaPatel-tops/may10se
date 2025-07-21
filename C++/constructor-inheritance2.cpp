#include<iostream>
using namespace std;
class Parent{
	public:
		Parent(int x){
			cout<<"\n Parent class x="<<x;
		}
};
class Child:public Parent{
	public:
		Child(int a,int b,int x):Parent(x){
			cout<<"\n Child class a="<<a<<"\t b="<<b;
		}
};
main(){
	Child c1(12,34,56);
}
