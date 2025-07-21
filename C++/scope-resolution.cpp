#include<iostream>
using namespace std;
int a=20;
class Maths{
	public:
		void display();
};
void Maths::display(){
	cout<<"\n method outside the class";
}
main(){
	cout<<::a;
	Maths m1;
	m1.display();
}
