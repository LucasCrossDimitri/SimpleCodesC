#include <stdio.h>
#include <stdlib.h>

#define L 5
#define C 5

int main() {	
	
	int A[L][C], i, j, x=0, y=0, maior;
	
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){			
			printf("posicao da matriz A[%d] [%d]: ",i,j);
			scanf("\n %d", &A[i][j]);
		}
	}
	
	maior = A[0][0];
	
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){	
		printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){			
			if(maior < A[i][j]){
				maior = A[i][j];
				x = i;
				y = j;
			}
		}
	}
	
	printf("Localizacao do maior valor da matriz [%d] [%d] = %d \n", x, y, maior);

	system("pause");
	return 0;
}