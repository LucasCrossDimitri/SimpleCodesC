#include <stdio.h>

void main(int n){

int i, Si = 0, Sp = 0, S;
	
	for(i = 1, i < 2*n-1; i += 2){
		Si = Si + i;		
	}
	
	for(i = 2;i < 2*n-1; i += 2){
		Sp = Sp + i;
	}
	
	S = Si - Sp;
	
	return S;
	
}