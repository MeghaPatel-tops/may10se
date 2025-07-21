#include<stdio.h>
struct Subject{
	char sname[20];
};
struct Student{
	int enroll;
	char name[20];
	struct Subject sub1;
};
main(){
	struct Student s1;
	printf("\n Enter enroll name and subject");
	scanf("%d %s %s",&s1.enroll,s1.name,s1.sub1.sname);
	printf("\n enroll=%d",s1.enroll);
	printf("\n name=%s",s1.name);
	printf("\n subject=%s",s1.sub1.sname);
}











