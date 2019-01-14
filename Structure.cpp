#include<stdio.h>
 struct Stud
 {
 	int age;
	int grade;
	char name[20];
 };
 
 int main()
 {
 	struct Stud s1;
 	printf("How old are ya m8: ");
 	scanf("%d", &s1.age);
 	printf("What grade are u in m8: ");
 	scanf("%d", &s1.grade);
 	printf("What's your name m8: ");
 	scanf("%s", &s1.name);
 	printf("\nthe age is %d\ndah grade ish %d\nWhatccha name %s ",s1.age,s1.grade,s1.name);
 	
 	
 }
