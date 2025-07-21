#include<iostream>
using namespace std;
class Maths{
	int a,b;
	public:
	Maths(int a,int b){
		this->a=a;
		this->b=b;
	}
	friend void add(Maths);
};
void add(Maths m1){
	cout<<"\n add="<<m1.a+m1.b;
}
main(){
	Maths m1(12,34);
	//cout<<m1.a;
	add(m1);
}
