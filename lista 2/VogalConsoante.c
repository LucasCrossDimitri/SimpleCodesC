#include <stdio.h>
#include <ctype.h>

void main(){
	
char a;
	
	printf("Digite qualquer digito para saber se e vogal digito cosoante caractere especial: \n");
	scanf("%c",&a);
	
	a = tolower(a);
	
	switch(a){
		
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	printf("Vogal");
		break;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	printf("Digito");	
		break;
	
	case 'b':
	case 'c':
	case 'd':
	case 'f':
	case 'g':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'v':
	case 'w':
	case 'x':
	case 'z':
	printf("Consiabte");
		break;
	default:
	printf("Caractere Especial");
		break;
	}
}

