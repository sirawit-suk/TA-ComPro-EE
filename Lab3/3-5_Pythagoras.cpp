#include <stdio.h>
#include <math.h>

int main(){
	
	float a,b,c;
	
	printf("Enter 2 sides of right triangle : ");
	scanf("%f %f",&a,&b);
	
	c = sqrt(a*a+b*b);
	
	printf("Other side is : %.2f",c);
	
	return 0;
}
