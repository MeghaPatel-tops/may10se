#include<iostream>
using namespace std;
class Maths{
	 public:
	 	static int objCount;
	 	Maths(){
	 		objCount++;
		 }
		static void countPrintf(){
			cout<<"count="<<Maths::objCount;
		} 
};
int Maths::objCount=0;
main(){
	//Maths m1,m2,m3;
	Maths::countPrintf();
}
