#include <stdio.h>

void main(){

int n,i,j,x;

	printf("digite o valor limite e depois 2 valores: ");
	scanf("%d", &n);
	printf("1 valor: ");
	scanf("%d", &i);
	printf("2 valor: ");
	scanf("%d", &j);

	for(x = 1; x < n; x++){
		if(((x % i) == 0)&&((x % j) == 0)){
			printf("%d -", x);
		}else if((x % i) == 0){
			printf("%d -", x);
		}else if((x % j) == 0){
			printf("%d -", x);
		}
	}	
	}
	