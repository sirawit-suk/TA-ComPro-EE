#include<stdio.h>
#include<string.h>

int main(){
	
	float score;
	char grade[3];
	bool error = false;
	
	printf("Enter your grade : ");
	scanf("%f", &score);
	
	
	if(score > 100 || score < 0){
		error = true;
	}else if(score >= 80){
		grade[0] = 'A';
	}else if(score >= 75){
		grade[0] = 'B';
		grade[1] = '+';
	}else if(score >= 70){
		grade[0] = 'B';
	}else if(score >= 60){
		grade[0] = 'C';
		grade[1] = '+';
	}else if(score >= 55){
		grade[0] = 'C';
	}else if(score >= 50){
		grade[0] = 'D';
	}else{
		grade[0] = 'F';
	}
	
	if(error == true){
		printf("Error: Invalid number (0.00-100.00), Try again!");
	}else{
		printf("Your grade is %s !", grade);
	}
	
	
}
