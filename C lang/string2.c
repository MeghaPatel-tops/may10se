#include<stdio.h>
main(){
	char str[20],str2[20];
	int i=0,j=0;
	printf("\n Enter the str");
	scanf("%s",str);
	printf("\n str=%s",str);
	
	while(str[i] != '\0'){
		i++;
	}
	
	printf("\n strlen=%d",i);
	i--;
	while(i >= 0){
		str2[j]=str[i];
		printf("\n str[%d]=%c",i,str[i]);
		i--;
		j++;
	}
	
	printf("\n rev str=%s",str2);
	
	
	
}
