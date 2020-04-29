#include <stdio.h>
//Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do
//teclado e imprima o endereço das posições contendo valores pares. 
main(void){
	
	int i, array[55], *arr;
	
	arr = &array[0];
	
	for(i=0; i<5; i++){
		printf("\nInsira um elemento: ");
		scanf("%d", &*arr);
		if(*arr%2==0){
			printf("\n%d", arr);
		}
		arr = arr + 1;
		
	}
	
	
}
