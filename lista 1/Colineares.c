#include <stdio.h>

void colineares(){

	int x1,y1,x2,y2,x3,y3;

	printf("digite valores para x1, y1, x2, y2, x3, y3: ");
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

	printf("\n\n");

	if(x1*y2*1 + y1*1*x3 + 1*x2*y3 - (y1*x2*1 + x1*1*y3 + 1*y2*x3) == 0)
		printf("true");

	else
		printf("0");	
}

int main (){

	colineares();

	printf("\n\n");

return 0;
}