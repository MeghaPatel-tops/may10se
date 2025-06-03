#include<stdio.h>
/*
  if(codition){
  	if(condition2){
  	}
}
else{
	//block
}
*/
main(){
	int maths,chem,phy,total,subtotal;
	printf("\n enter the marks of maths phy chem");
	scanf("%d %d %d",&maths,&phy,&chem);
	
	if(maths >= 65 && phy >=55 && chem >=50){
		//66 56 50 = 162  122
		total=maths+phy+chem;
		subtotal= maths+phy;
		if(total >=190 || subtotal >=140){
			printf("\n Eligible for admision");
		}
		else{
			printf("\n Not inner eligible for admision");
		}
	}
	else{
		printf("\n Not eligible for admision");
	}	
}
