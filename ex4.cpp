#include <stdio.h>
//� Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os e exiba
o maior endere�o
main(void){
	
	int a = 00, b = 555;
	
	if(&a > & b){
		printf("%d", &a);
	}else printf("%d", &b);
}
