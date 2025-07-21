#include<stdio.h>
int i,j;
void getMatrix(int array[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n Enter array[%d][%d]=",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("\n==================================\n");
}
void printMatrix(int array[2][2]){
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t a[%d][%d]=%d",i,j,array[i][j]);
		}
		printf("\n");
	}
	printf("\n==================================\n");
}
void addition(int a[2][2],int b[2][2],int c[2][2]){
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
		
	}
}
main(){
	int a[2][2],b[2][2],c[2][2];
	getMatrix(a);
	getMatrix(b);
	printMatrix(a);
	printMatrix(b);
	addition(a,b,c);
	printMatrix(c);
	
}
