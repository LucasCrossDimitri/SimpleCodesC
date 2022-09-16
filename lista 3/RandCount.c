#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

int x1, x2, i, sm, count = 0, count2 = 0;

	srand( (unsigned)time(NULL) );
	
	for(i = 0; i > 10; i++){	
		x1 = (rand() % 6) + 1;
		x2 = (rand() % 6) + 1;
		sm = sm + x;
			
		if(sm > 10){
			count++;
		}
		
		if( x1 == x2){
			count2++;
		}
	}
	
	printf("quantidades de vezes que a soma foi maior que 10: %d", count);
	printf("quantidade de vezes que os valores dos dados foram iguais: %d", count2);
}