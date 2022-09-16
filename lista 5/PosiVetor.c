#include <stdio.h>
#include <stdlib.h>

#define N 5

int main() {	

	int A[N], i, k = 0, z = 0;
		
	for (i=0; i<N ;i++){
	    printf("Digite um numero para posicao %d do vetor: ", i);
	    scanf ("%d", &A[i]);
		printf("\n");
	}
	printf("Digite uma constante: ");
	    scanf ("%d", &k);
	
	printf("vetor: ");
	for (i=0; i<N ;i++){
		z = k * A[i];
		printf("%d ", z);	    
	}
	printf("\n");
	system("pause");
	return 0;
}
	
	