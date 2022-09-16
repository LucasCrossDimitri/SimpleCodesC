#include <stdio.h>
#include <stdlib.h>
#define LIM 25
#define FALSE 0
#define TRUE 1

int simetrica(int a[LIM][LIM], int n){
    
	int i = 1, j, sim = TRUE;
    
	while (sim && i < n)
    {
        j = 0;
        while (sim && j < i)
        {
            sim = a[i][j] == a[j][i];
            j = j + 1;
        }
        i = i + 1;
    }
    return sim;
}

int main(int argc, char *argv[])
{
    
	int i, j, n, mat[LIM][LIM];
    
	printf("Defina o x, tamanho da matriz A[x][x]: ");
	scanf("%d", &n);
	printf("\n");
    
	if (n < LIM)
    {
        for (i = 0; i < n; i = i + 1){
            for (j = 0; j < n; j = j + 1){
				scanf("%d", &mat[i][j]);
			}
			putchar('\n');
		}
        if (simetrica(mat, n)){
			printf("sim\n");
		}else printf("nao\n");
    }
    else printf("Matriz exede o limite!\n");
	
	system("pause");
    return 0;
}