#include<stdio.h>
main(){
	int num;
	
	printf("\n enter the num");
	scanf("%d",&num);
	
	if(num%2==0){
		goto even;
	}else{
		goto odd;
	}
	
	even:{
		printf("\n Even number");
		return;
	}
	
	odd:{
		printf("\n Odd number");
	}
	
}
