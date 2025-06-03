#include<stdio.h>
//function declration
void display();
void add(int a ,int b);
int square(int num);
main(){
	int ans;
	//function call
	display();
	display();
	add(12,34);
	add(1,2);
	
	ans=square(12);
	printf("\n square of 12=%d",ans);
	
	printf("\n square of 7 =%d",square(7));
	
}
//function definition
void display(){
	printf("\n Hello world");
}

void add(int a, int b){
	int c= a+b;
	printf("\n addition =%d",c);
}
int square(int num){
	int s= num *num;
	return s;
}
