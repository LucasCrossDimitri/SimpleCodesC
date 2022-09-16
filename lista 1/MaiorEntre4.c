#include <stdio.h>

	int dec(int l, int p, int c){

		if (l > p && p > c)
			return 1;
		
		else if (l > c && c > p)
			return 2;
		
		else if (p > l && l > c)
			return 3;
		
		else if (p > c && c > l)
			return 4;
		
		else if (c > l && l > p)
			return 5;
		
		else if (c > p && p > l)
			return 6;
	}

	int main(){

		int d, e, f, res;

		printf("Digite o primeiro numero: ");
		scanf("%d", &d);
		printf("Digite o segundo numero: ");
		scanf("%d", &e);
		printf("Digite o terceiro numero: ");
		scanf("%d", &f);

		res = dec(d, e, f);

		switch (res){
			case 1: printf("%d %d %d", d, e, f); break;
			case 2: printf("%d %d %d", d, f, e); break;
			case 3: printf("%d %d %d", e, d, f); break;
			case 4: printf("%d %d %d", e, f, d); break;
			case 5: printf("%d %d %d", f, d, e); break;
			case 6: printf("%d %d %d", f, e, d); break;
			default: printf("ERROR!"); break;
		}
	return 0;
	}
