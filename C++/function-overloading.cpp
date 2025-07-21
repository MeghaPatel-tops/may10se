#include<iostream>
using namespace std;
class Maths{
	public:
		void add(int x,int y){
			cout<<"\n addition of tow int ="<<x+y;
		}
		void add(float a, float b ,float c){
			cout<<"\n addition of three float="<<a+b+c;
		}
};
main(){
	Maths m1;
	m1.add(1.2,3.4,56);
	m1.add(12,56);
}
