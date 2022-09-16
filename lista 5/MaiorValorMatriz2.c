#include <stdio.h>
#include <stdlib.h>

#define L 20
#define C 20

int main() {	

	int A[L][C], i, j, maior;

	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){			
			printf("posicao da matriz A[%d] [%d]: ",i,j);
			scanf("\n %d", &A[i][j]);
		}
	}

	maior = A[0][0]*A[0][1]*A[0][2]*A[0][3];

	for(i = 0; i < L; i++){
		for(j = 0; j < 17; j++){	
				if(maior < (A[i][j]*A[i][j+1]*A[i][j+2]*A[i][j+3])){
					maior = (A[i][j]*A[i][j+1]*A[i][j+2]*A[i][j+3]);
				}
		}
	}
	
	printf("maior valor da matriz = %d \n", maior);

system("pause");
	return 0;
}