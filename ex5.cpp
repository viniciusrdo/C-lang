#include <stdio.h>
//Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis do teclado.
//Em seguida, compare seus endere�os e exiba o conte�do do maior endere�o. 
main(void){
	
	int a = 00, b = 555, *pa, *pb;
	
	pa = &a;
	
	pb = &b;

	printf("Insira o valor de a e b:");
	
	scanf("%d", &a);	
	
	scanf("%d", &b);
	
	if(*pa > *pb){
		printf("%d", pa);
	}else printf("%d", pb);
}
