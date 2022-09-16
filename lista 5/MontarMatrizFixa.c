#include <stdio.h>
#include <stdlib.h>

#define L 5
#define C 5

int main() {
	
	int A[L][C], i, j;
	
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){			
			if(i == j){
				printf("1 ");
			}else if(i==0 && j==4 || i==1 && j==3 || i==2 && j==2 || i==3 && j==1 || i==4 && j==0){
				printf("2 ");
			}else{
				printf("0 ");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}