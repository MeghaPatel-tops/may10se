#include<iostream>
int i,j;
using namespace std;
template <typename T>
class Arraysort{
	public:
		T a[5],temp;
		Arraysort(){
			for(i=0;i<5;i++){
				cout<<"\n enter i="<<i+1<<"element";
				cin>>a[i];
			}
		}
		T sortA(){
			for(i=0;i<5;i++){
				for(j=i+1;j<5;j++){
					if(a[i]>a[j]){
						temp =a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
		}
		T display(){
			for(i=0;i<5;i++){
				cout<<"\n"<<a[i];
			}
		}
};
main(){
	Arraysort<int> a1;
	a1.sortA();
	a1.display();
	
	Arraysort<char> a2;
	a2.sortA();
	a2.display();
}



