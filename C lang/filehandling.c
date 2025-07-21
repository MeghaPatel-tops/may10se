#include<stdio.h>
main(){
	char name[20],ch;
	char email[20];
	int enroll,i;
	FILE *fp;
	fp= fopen("student.csv","a");
	//fprintf(fp,"Enroll,Name,Email\n");
	for(i=0;i<3;i++){
		printf("\n Enter rollno , name , email:");
		scanf("%d %s %s",&enroll,name,email);
		fprintf(fp,"%d,%s,%s\n",enroll,name,email);
	}
		
	fclose(fp);
	
	fp = fopen("Student.csv","r");
	while((ch=getc(fp))!=EOF){
		if(ch==','){
			printf("\t");
			continue;
		}
		printf("%c",ch);
	}
	fclose(fp);
	
}
