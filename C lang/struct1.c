#include<stdio.h>
struct Student
{
	int sid;
	char name[20];
};

main(){
	struct Student s1 = {101,"Trisha"};
	struct Student s2 = {012,"mahesh"};
	
	printf("\n student id=%d \t name=%s",s1.sid,s1.name);
	printf("\n student id=%d \t name=%s",s2.sid,s2.name);
}
