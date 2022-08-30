//Fazer um programa leia uma string que represente um número de zero a dez e converta para o respectivo número e devolva
//a quantidade de caracteres. Por xemplo: DEZ 10  3 caracteres

#include <stdio.h>
#include <stdlib.h>

void main()
{
	char numero[6];
	int qtdCaracteres, valorNumero;
	
	printf("Digite o numero (em extenso) que deseja converter: ");
	scanf("%s", numero);
	
	qtdCaracteres = strlen(numero);
	
	switch (qtdCaracteres)
	{
		case 2:
			valorNumero = 1;
			break;
		case 3:
			valorNumero = 10;
			break;
		case 4:
			if (numero[0] == 's')
			{
				if (numero[qtdCaracteres - 1] == 's')
					valorNumero = 6;
				else
					valorNumero = 7;
			}
			else if (numero[0] == 'd')
				valorNumero = 2;
			else if (numero[0] == 't')
				valorNumero = 3;
			else if (numero[0] == 'o')
				valorNumero = 8;
			else
				valorNumero = 9;
				break;
		case 5:
			if (numero[0] == 'c')
				valorNumero = 5;
			else
				valorNumero = 4;
			break;
	}
	
	printf("\nNúmero (extenso): %s", numero);
	printf("\nNúmero (inteiro): %i", valorNumero);
	printf("\nQuantidade caracteres: %i", qtdCaracteres);
}
