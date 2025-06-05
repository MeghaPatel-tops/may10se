#include<stdio.h>
main(){
	//datatype arrayname[size];
	int a[5]={1,45,67,89,19};
	
	int i,sum=0;
	for(i=0;i<5;i++){
		printf("\n Enter a[%d]:",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	for(i=0;i<5;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
	
	printf("\n sum of all element=%d",sum);
	
}
