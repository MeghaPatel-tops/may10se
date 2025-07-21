#include<iostream>
using namespace std;
class User{
	 int uid;
	 char uname[30];
	 
	 public:
	 	void registerUser(){
	 		cout<<"\n enter uid and uname";
	 		cin>>uid>>uname;
		 }
		 void showUser(){
		 	cout<<"\n uid="<<uid;
		 	cout<<"\n uname="<<uname;
		 }
};
main(){
	User u[3];
	int i;
	for(i=0;i<3;i++){
		cout<<"\n Enter "<<i+1<<"user details";
		u[i].registerUser();
	}
	for(i=0;i<3;i++){
		cout<<"\n show "<<i+1<<"user details";
		u[i].showUser();
	}
}
