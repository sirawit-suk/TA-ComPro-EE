#include<stdio.h>

int main(){
	
	char name[40];
	float gpa;
	
	printf("---- KMITL Student ----\n");
	printf("Enter your name-surname : ");
	scanf("%[^\n]",&name);
	printf("Enter your GPA : ");
	scanf("%f",&gpa);
	printf("\n");
	printf("Name-Surname : %s\n", name);
	printf("GPA : %.2f", gpa);

	
	return 0;
}
