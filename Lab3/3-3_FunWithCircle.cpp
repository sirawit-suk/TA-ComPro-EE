#include<stdio.h>

int main(){
	
	float r; 
	float PI = 3.141593;
	
	
	printf("---- Circle Calculator Program ----\n");
	printf("Enter radius(cm) : ");
	scanf("%f",&r);
	printf("\n");
	printf("Diameter of circle : %.2f cm\n", 2*r);
	printf("Circumference of circle : %.2f cm\n", 2*PI*r);
	printf("Area of circle : %.2f cm\n", PI*r*r);
	printf("\n");
	printf("Area of sphere : %.2f cm\n", 4*PI*r*r);
	printf("Volume of sphere : %.2f cm", 4.0/3*PI*r*r*r);
	
	return 0;
	
}
