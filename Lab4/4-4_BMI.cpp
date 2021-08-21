#include<stdio.h>

int main(){

	float bmi;
	int weight,height;
	
	printf("Enter your weight(kg) : ");
	scanf("%d", &weight);
	printf("Enter your height(cm) : ");
	scanf("%d", &height);

	bmi = weight / ((height/100.00) * (height/100.00) );
	printf("Your BMI : %.2f\n",bmi);
	if(bmi >= 30){
		printf("You are Obersity class II!");
	}else if(bmi >= 25){
		printf("You are Obersity class I!");
	}else if(bmi >= 23){
		printf("You are Overweight!");
	}else if(bmi >= 18.5){
		printf("You are Normal weight!");
	}else{
		printf("You are Underweight!");
	}
}
