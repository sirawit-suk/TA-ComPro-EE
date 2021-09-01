#include<stdio.h>

int main(){
	
  int n, c, k;

  
  for(int i = 0; i < 8 ; i++){
  	
  	n = 1 << i;
  	
	for (c = 31; c >= 0; c--)
	  {
	    k = n >> c;
	
	    if (k & 1)
	      printf("1");
	    else
	      printf("0");
	  }
	
	  printf("\n");
  }



	
}
