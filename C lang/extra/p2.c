#include<stdio.h>
main(){
	int start,end,i,choice;
	printf("\n press 1 for forward");
	printf("\n press 2 for Reverse");
	printf("\n Enter strat and end value:");
	scanf("%d %d",&start,&end);
	printf("\n enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			for(i=start;i<=end;i++){
				printf("\n i=%d",i);
			}
		break;
		case 2:
			for(i=end;i>=start;i--){
				printf("\n i=%d",i);
			}
		break;	
		default:
		printf("\n wrong choice");
		break;
			
	}
}
