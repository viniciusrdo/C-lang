#include <stdio.h>
// Fa�a um programa que leia dois valores inteiros e chame uma fun��o que receba estes 2
//valores de entrada e retorne o maior valor na primeira vari�vel e o menor valor na segunda
//vari�vel. Escreva o conte�do das 2 vari�veis na tela.
int retorna(int x, int y){
	int aux;
	if(x > y){
		aux = y;
		y = x;
		x = aux;
	}else{
		aux = x;
		x = y;
		y = aux;
	}
	printf("\n\no valor de A eh: %d\n O valor de B eh: %d",x, y);
}

main(void){
	
	int a, b;
	
	printf("Insira o valor de A e B respectivamente: ");
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	retorna(a,b);
}
