#include <stdio.h>

void main(){

int idade[40], x, aluno = 0, z = 0;

	for(x = 0; x < 40; x++){
	printf("informe a ideade %d: ", x + 1);
	scanf("%d", &idade[x]);	
	}
	
	for(x = 0; x < 40; x++){
	
		z= idade[x];
		printf("%d - ", z);
		if(z > 21){		
			aluno++;	
		}
	}
	aluno = (aluno/40);
	
	printf("A portcentagem de jov com mais de 21 e %d %%", (aluno*100));
	
	
	
}	

