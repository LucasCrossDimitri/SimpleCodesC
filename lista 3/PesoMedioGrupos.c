#include <stdio.h>

void main(int n){

int g1 = 0, g2 = 0, g3 = 0, g4 = 0, idade, i;
float peso, p1 = 0, p2 = 0, p3 = 0, p4 = 0;

	for(i = 0; i < n; i++){
		
		printf("informe peso e idade");
		scanf("%f %d", &peso, &idade);	
	
		if(idade <= 18){
			g1 += 1;
			p1 += peso;
		}
		else if(idade <= 30){
			g2 += 1;
			p2 += peso;
		}
		else if(idade <= 50){
			g3 += 1;
			p3 += peso;
		}
		else if(idade > 50){
			g4 += 1;
			p4 += peso;
		}
	}
	
	if(g1 != 0){
		printf("peso medio do grupo: %f", p1/g1);
	}
	if(g2 != 0){
		printf("peso medio do grupo: %f", p2/g2);
	}
	if(g3 != 0){
		printf("peso medio do grupo: %f", p3/g3);
	}
	if(g4 != 0){
		printf("peso medio do grupo: %f", p4/g4);
	}
}

