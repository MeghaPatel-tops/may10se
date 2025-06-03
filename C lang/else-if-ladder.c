#include<stdio.h>
/*
if(cond1)
{//block}
else if(condi2)
{//block}
else if(condi3)
{//block}
else{}
*/
main(){
	int x1,x2;
	printf("\n Enter the value of x1 and x2");
	scanf("%d %d",&x1,&x2);
	if(x1>0 && x2>0){
		printf("\n first");
	}
	else if(x1<0 && x2 >0){
		printf("\n sec");
	}
	else if(x1<0 && x2<0){
		printf("\n third");
	}
	else if(x1>0 && x2<0){
		printf("\n forth");
	}
	else{
		printf("\center");
	}
}
