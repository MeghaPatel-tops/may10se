#include<stdio.h>
/*
  if(codition){
  	//block
	}
else{
	//block
}
*/
main(){
	int num;
	printf("\n enter the num:");
	scanf("%d",&num);
	if(num%2==0){
		printf("\n %d id even num",num);
	}
	else{
		printf("\n %d is odd num",num);
	}	
}
