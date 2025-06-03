#include<stdio.h>
//call by value
void swap(int *a, int *b){
	int temp= *a;
	*a=*b;
	*b=temp;
	printf("\n in function a=%d and b=%d",*a,*b);
}
main(){
	int a=20,b=30;
	swap(&a,&b);	
	printf("\n a=%d and b=%d",a,b);
}
