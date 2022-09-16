#include <stdio.h>

void main(){

int i;

	printf("digite o dia da semana 1-7 : ");
	scanf("%d",&i);
	printf("\n");
	
	switch(i){
		
	case 1:
	printf("Segunda Feira");
		break;
	case 2:
	printf("Terca feira");
		break;
	case 3:
	printf("Quarta Feira");
		break;
	case 4:
	printf("Quinta Feira");
		break;
	case 5:
	printf("Sexta Feira");
		break;
	case 6:	
	printf("Sabado");
		break;
	case 7:
	printf("Domingo");
		break;
	default:
	printf("Esse dia nao existe!");
		break;
	}
	printf("\n");
}