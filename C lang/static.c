#include<stdio.h>
void incre(){
	int a=0;//0
	static int s=0;//0
	a++;//1
	s++;//2
	printf("\n a=%d and s=%d",a,s);
}

main(){
	int i;
	for(i=0;i<3;i++){
		incre(); 
	}
}
