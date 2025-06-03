#include<stdio.h>
main(){
	int a=10,b=3,c;
	int rem = a%b;
	printf("\n rem=%d",rem);
	a++;//increment by 1
	printf("\n a=%d",a);
	//c=b++;//first assign to varibel then incremnt by1 
	c=++b;//first incremnt then assign
	printf("\n c=%d",c);
	
}
