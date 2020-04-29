#include <stdio.h>

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
