#include <stdio.h>

	
int imprime(int *x){
	

	printf("\n%d", *x);
	
	printf("\n%d", *x+1);
	
	printf("\n%d", *x+2);	
	
	return 0;
	
}

int main(void){
	
	int array[3], *arr;
	
	array[0]=0;
	array[1]=1;
	array[2]=2;
	
	arr = &array[0];
	
	imprime(arr);
	}
	
	

