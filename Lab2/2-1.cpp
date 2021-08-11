#include<stdio.h>

int main(){
	 
	float penPrice = 7.50;
	float pencilPrice = 5.00;
	float cash = 20.00;
	
	printf("---* LADKRABANG SHOP *---\n");
	printf("Register: 13:01, 20 AUG 2021  \n\n");
	printf("List\tAmount\tPrice(Bahts)\n");
	printf("Pen\t%d\t%.2f\n",1,penPrice);
	printf("Pencil\t%d\t%.2f\n\n",1,pencilPrice);
	
	printf("Total\t\t%.2f\n", penPrice+pencilPrice);
	printf("Cash\t\t%.2f\n", cash);
	printf("Change\t\t%.2f\n\n",cash-(penPrice+pencilPrice));
	printf("----* THANK YOU *----\n");
	
	return 0;
}
