#include <stdio.h>

main(void){
	
	int a = 00, b = 555;
	
	if(&a > & b){
		printf("%d", &a);
	}else printf("%d", &b);
}
