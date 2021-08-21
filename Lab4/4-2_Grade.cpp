#include<stdio.h>

int main(){
	
	float score;
	
	printf("Enter your grade : ");
	scanf("%f", &score);
	
	
	if(score > 100 || score < 0){
		printf("Error: Invalid number (0.00-100.00), Try again!");
	}else if(score >= 80){
		printf("Your grade is A !");
	}else if(score >= 75){
		printf("Your grade is B+ !");
	}else if(score >= 70){
		printf("Your grade is B !");
	}else if(score >= 60){
		printf("Your grade is C+ !");
	}else if(score >= 55){
		printf("Your grade is C !");
	}else if(score >= 50){
		printf("Your grade is D !");
	}else{
		printf("Your grade is F !");
	}

}
