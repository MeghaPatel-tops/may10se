#include<iostream>
using namespace std;
class Maths{
	int a,b;
	public:
	  
	  //• Parameterized Constructor	
		Maths(int a,int b){
			this->a=a;
			this->b=b;
		}
		
		void display(){
			cout<<"\n a="<<a<<"\t b="<<b;
		}
		
};
main(){
	Maths m1(12,3);
	m1.display();
	Maths m2(45,67);
	m2.display();
}
