#include<stdio.h>
int y=100;//global varible
void swap(int a, int b){//a,b are formal scope
	int temp=a;
	a=b;
	b=temp;
	printf("\n in function a=%d and b=%d",a,b);
}
main(){
	{
		int a=10;//local varible
			printf("\n a=%d",a);
			printf("\n y=%d",y);
	}
		printf("\n y=%d",y);
		
		swap(12,34);
		
		printf("\n a=%d b=%d",a,b);
		
}
