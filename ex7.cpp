#include <stdio.h>

main(void){
	
	int i;
	
	float array[10], *arr;
	
	arr = &array[0];
	
	for(i=0; i<10; i++){
		printf("\t%d", arr);
		arr = arr + 1;
		
	}
	
}
