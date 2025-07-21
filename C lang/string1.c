#include<stdio.h>
main(){
	char str[5]={'t','o','p','s','\0'};//init value
	char str2[10];//input value
	char str3[10];
	
	printf("\n str=%s",str);
	
	
	printf("\n Enter string with space");
	gets(str3);
	
	printf("\n string =");
	puts(str3);
	
	printf("\n Enter str2");
	scanf("%s",str2);
	printf("\n str2=%s",str2);
	
	
}
