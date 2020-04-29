#include <stdio.h>

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
