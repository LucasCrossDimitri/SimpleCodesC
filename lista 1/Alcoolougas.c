#include <stdio.h>

	void combustivel(){
		float gas, alc, desg, desa, resg, resa;

		printf("Digite o preco do litro da gasolina: ");
		scanf("%f", &gas);
		printf("Digite o preco do litro do alcool: ");
		scanf("%f", &alc);
		printf("Digite o desempenho do carro quando abastecido com gasolina: ");
		scanf("%f", &desg);
		printf("Digite o desempenho do carro quando abastecido com alcool: ");
		scanf("%f", &desa);

		resg = desg / gas;
		resa = desa / alc;

		if (resa > resg)
			printf("Alcool e mais vantajoso!");

		else if (resa == resg)
			printf("Indiferente!");

		else 
			printf("Gasolina e mais vantajoso!");
	}

	int main (){

		combustivel();

		printf("\n\n\n");

	return 0;
	}