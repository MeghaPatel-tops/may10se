#include<stdio.h>
main(){
	//datatype arrayname[size];
	int a[5]={1,45,67,89,19};
	
	int i,j,temp;
	for(i=0;i<5;i++){
		printf("\n Enter a[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	//sorting
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
	
		
	
}
