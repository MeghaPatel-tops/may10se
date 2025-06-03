#include<stdio.h>
//without return type without parameter
void display(){
	printf("\n Hello world");
}
//without return type with parameter
void add(int a, int b){
	int c= a+b;
	printf("\n addition =%d",c);
	
}
//with return type with parameter
int square(int num){
	int s= num *num;
	return s;
}
////with return type without parameter
float areaOfCircle(){
	int r;
	float area;
	printf("\n Enter the radius");
	scanf("%d",&r);
	area= 3.14*r*r;
	return area;
	
}

main(){
	display();
	add(2,3);
	printf("\n sq of 12=%d",square(12));
	printf("\n area of circle=%f",areaOfCircle());
}
