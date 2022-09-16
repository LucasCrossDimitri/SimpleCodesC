#include <stdio.h>

	int isMultiplo (int num){

		if(num%13 == 0 && num%11 == 0)
			return 1;

		else 
			return 0;
	}

	int main (){

		int a, res;

		printf("Digite um numero multiplo de 13 e 11: ");
		scanf("%d", &a);

		res = isMultiplo(a);

		if (res == 1)
			printf("TRUE!");

		else 
			printf("FALSE!");

		printf("\n\n");

		return 0;
	}