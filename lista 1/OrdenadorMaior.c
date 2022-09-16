#include <stdio.h>

	void dec(){

		int a, b, c, res;

			printf("Digite o primeiro numero: ");
			scanf("%d", &a);
			printf("Digite o segundo numero: ");
			scanf("%d", &b);
			printf("Digite o terceiro numero: ");
			scanf("%d", &c);

			if (a > b && b > c)
				printf("%d %d %d", a, b, c);
		
			else if (a > c && c > b)
				printf("%d %d %d", a, c, b);
		
			else if (b > a && a > c)
				printf("%d %d %d", b, a, c);
		
			else if (b > c && c > a)
				printf("%d %d %d", b, c, a);
		
			else if (c > a && a > b)
				printf("%d %d %d", c, a, b);
		
			else if (c > b && b > a)
				printf("%d %d %d", c, b, a);

	}

	int main(){

		dec();

		printf("\n\n");

	return 0;
	}