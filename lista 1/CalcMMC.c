#include <stdio.h>
#include <stdlib.h>

int main() {

	int j;
	float a, res;

	printf("informe sua altura: \n");
	scanf(" %f", &a);
	
	printf("informe sexo 1 - M / 2 - F: \n");
	scanf(" %d", &j);
	
	if( j == 1){
		res = (72.7 * a) - 58.0;
		printf("seu peso ideal e: %f", res);
		
	}
	else if(j == 2){
		res = (62.1 * a) - 44.7;
		printf("seu peso ideal e: %f", res);
		
	}
	else{
		printf("Sexo Invalido");
	}
	
	return 0;
	
}