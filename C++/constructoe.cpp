#include<iostream>
using namespace std;
class Maths{
	int a,b;
	public:
	  //• Simple(Default) Constructor
		Maths(){
			cout<<"\n default constructor called";
		}
	  //• Parameterized Constructor	
		Maths(int x,int y){
			a=x;
			b=y;
		}
		//copy 
		Maths(Maths &m2){
			a= m2.a;
			b= m2.b;
		}
		void display(){
			cout<<"\n a="<<a<<"\t b="<<b;
		}
		~Maths(){
			cout<<"\ndesctructor method called";
		}
};
main(){
	Maths m1,m2(12,34);
	m2.display();
	Maths m5(100,300);
	Maths m3=m5;
	m3.display();
}
