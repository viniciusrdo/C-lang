#include <stdio.h>

main(void){
	
	int a = 25;
	int *pa = &a;
	int b = *pa + a;
	
	printf("%d %d %d %d %d %d\n", a, pa, &a, *pa, b, &b);
}
