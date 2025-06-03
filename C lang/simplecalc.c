#include<stdio.h>
main(){
	
	int num1,num2,ans;
	float ans1;
	printf("\n Enter the value of num1 and num2:");
	scanf("%d %d",&num1,&num2);
	ans=num1+num2;
	printf("\n add=%d",ans);
	ans= num1-num2;
	printf("\n sub=%d",ans);
	ans=num1*num2;
	printf("\n mul=%d",ans);
	ans1=num1/num2;
	printf("\n div=%f",ans1);
}
