#include <stdio.h>
#include <stdlib.h>

#define L 3
#define C 3

int main() {	

	int A[L][C], B[L][C], i, j, count = 0;

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
			if(A[i][j] == B[i][j])
				count++;
		}
	}
	
	if(count == L*C){
		printf("sao iguais. \n");
	}else{
		printf("nao sao iguais. \n");
	}
	
	
system("pause");
	return 0;
}