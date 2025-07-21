#include<stdio.h>
union Student{
	int enroll;//4
	char name[20];//20
};
main(){
	union Student s;
		printf("\n Enter  student enroll and name");
		scanf("%d %s",&s.enroll,s.name);	
		printf("\n %d \t %s",s.enroll,s.name);
		
	}
