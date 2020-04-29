#include <stdio.h>
// Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2
//valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda
//variável. Escreva o conteúdo das 2 variáveis na tela.
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
