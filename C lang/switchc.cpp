#include<stdio.h>
/*
switch(choice){
  case 1:
   //block
  break
  case 2:
    //block
 break;
 default:
 break	 
}

*/
main(){
	int num1,num2;
	char choice;
	float div;
	printf("\n press + for Add");
	printf("\n press - for Sub");
	printf("\n press * for Mul");
	printf("\n press / for Divi");
	printf("\n Enter ypur choice:");
	scanf("%c",&choice);
	printf("\n enter the value of num1 and num2:");
	scanf("%d %d",&num1,&num2);

	
	switch(choice){
		case '+':
			printf("\n addition=%d",num1+num2);
		break;	
		case '-':
			printf("\n sub=%d",num1-num2);
		break;
		case '*':
			printf("\n mul=%d",num1*num2);
		break;
		case '/':
			div =num1/num2;
			printf("\n div=%.2f",div);
		break;
		default:
			printf("\n wrong choice");
		break;				
	}
	
				
}
