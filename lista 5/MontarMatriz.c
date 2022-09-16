#include <stdio.h>
#include <stdlib.h>

#define L 2
#define C 2

int main() {
	
	int A[L][C], B[L][C], X[L][C], i, j;
	
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){			
			printf("posicao da matriz A[%d] [%d]: ",i,j);
			scanf("\n %d", &A[i][j]);
		}
	}
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){	
			printf("posicao da matriz B[%d] [%d]: ",i,j);
			scanf("\n %d", &B[i][j]);
		}
	}
	
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){		
			X[i][j] = ( A[i][j]*B[i][j] ); 
		}
	}
	
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){	
		printf("%d ",X[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}