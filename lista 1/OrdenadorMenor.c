#include <stdio.h>

void maiorDe4(){


	int a, b, c, d;

	printf("Digite o valor de a, b, c, d: ");
	scanf("%d %d %d %d", &a ,&b, &c, &d);

	if(a > b && a>c && a>d)
		printf("%d", a);

	else if(b>a && b>c && b>d)
		printf("%d", b);

	else if(c>a && c>b && c>d)
		printf("%d",c );

	else if(d>a && d>b && d>c)
		printf("%d", d);

	else 
		printf("valores iguais" );

}

int main(){

	maiorDe4();

	printf("\n");

return 0;
}
