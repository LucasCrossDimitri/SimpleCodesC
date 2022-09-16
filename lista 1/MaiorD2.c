#include <stdio.h>

int maiorDe2(int a, int b){

	if(a > b)
		return a;

	else if(a == b)
		return a;

	else 
		return b;
}

int main (){

	int a, b, p;

	printf("Digite o valor de a e b: ");
	scanf("%d %d", &a ,&b);

	p=maiorDe2(a, b);

	printf("%d\n\n", p);

return 0;
}