#include<stdio.h>
struct Student{
	int enroll;
	char name[20];
};
main(){
	struct Student s[3];
	int i;
	for(i=0;i<3;i++){
		printf("\n Enter %d student enroll and name",i+1);
		scanf("%d %s",&s[i].enroll,s[i].name);
	}
	for(i=0;i<3;i++){
		printf("\n Enroll \t name");
		for(i=0;i<3;i++){
			printf("\n %d \t %s",s[i].enroll,s[i].name);
		}
	}
}
