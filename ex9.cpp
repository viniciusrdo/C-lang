#include <stdio.h>

	//Crie uma fun��o que receba como par�metro um array e o imprima. N�o utilize �ndices para
	//percorrer o array, apenas aritm�tica de ponteiros
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
	
	

