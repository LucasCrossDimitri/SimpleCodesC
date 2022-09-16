#include <stdio.h>

void main(){
	
int i,v;

	printf("digite o numero para checar o menor:\n");
	printf("1 numero: ");
	scanf("%d",&i);
	printf("\n");
	printf("2 numero: ");
	scanf("%d",&v);
	printf("\n");
	
	if(i<v){
		i = 1;
	}
	else{
		i = 2;
	}
	
	switch(i){
		
		case 1:
		printf("1 numero e menor");
			break;
		case 2:
		printf("2 numero e menor");
			break;
	}
}