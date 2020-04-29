#include <stdio.h>

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
