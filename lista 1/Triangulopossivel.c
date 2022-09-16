#include <stdio.h>
#include <stdlib.h>

int main() {

	int x, y, z;

	printf("informe um valor da reta1: \n");
	scanf(" %d", &x);
	
	printf("informe um valor da reta2: \n");
	scanf(" %d", &y);
	
	printf("informe um valor da reta3: \n");
	scanf(" %d", &z);
	
	if( x >= 1 && y >= 1 && z >= 1){
		if (x < (y + z) && y < (x + z) && z < (y + x)){
			printf("e um triangulo possivel");
		}
		else{
		printf("Nao e um triangulo");
		}
	}
	else{
		printf("digite um numero maior que 0");
		
	}
	
	return 0;
	
}