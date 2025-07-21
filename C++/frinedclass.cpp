#include<iostream>
using namespace std;
//class Calc;
class Maths{
	int a,b;
	public:
	Maths(int a,int b){
		this->a=a;
		this->b=b;
	}
	
	friend class Calc;
	
};
class Calc{
	public:
		void add(Maths m1){
			cout<<"\n add="<<m1.a+m1.b;
		}
};

main(){
	Maths m1(12,34);
	Calc c1;
	c1.add(m1);
}
