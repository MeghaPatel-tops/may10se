#include<iostream>
using namespace std;
class Maths{
	 public:
	 	int a,b,c,d;
	 	Maths(int x,int y,int z,int m){
	 		a=x;
	 		b=y;
	 		c=z;
	 		d=m;
		 }
		 Maths(int x){
		 	a=x;
		 }
};
main(){
	Maths* m2 = new Maths(12);
	cout<<"\n size of m2="<<sizeof(m2);
	
	Maths m1(12,123,34,56);
	cout<<"\n size of m1="<<sizeof(m1);
}
