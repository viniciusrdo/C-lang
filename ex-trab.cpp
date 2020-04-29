#include <stdio.h>

void func(int *px, int *py){
	px = py;
	*py = (*py)* (*px);
	*px = *px + 2;
	
}


main(void){
	int x, y;
	
	scanf("\n%d", &x);	
	scanf("\n%d", &y);
	
	func(&x, &y);
	
	printf("\nx=%d e y=%d", x,y);
}
