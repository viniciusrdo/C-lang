#include <stdio.h>
//– Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba
o maior endereço
main(void){
	
	int a = 00, b = 555;
	
	if(&a > & b){
		printf("%d", &a);
	}else printf("%d", &b);
}
