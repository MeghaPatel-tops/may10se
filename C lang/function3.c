#include<stdio.h>
//5!  5*4!  5*4*3! 5*4*3*2!  5*4*3*2*1

int fact(int num){
	int f;
	if(num == 1){
		return 1;
	}
	f= num*fact(num-1);
	return f;
}
main(){
	printf("\n factorial =%d",fact(5));
}
