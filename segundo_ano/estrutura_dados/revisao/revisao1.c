//Revisao 1: revisao de variaveis e controles de repeticoes
//Desenhe um retangulo de asteriscos (*) na tela, sendo que o usuario deve digitar o tamanho.
//Ex se o usuario pedir 4 linhas e 4 colunas:
// * * * *
// * * * *
// * * * *
// * * * *

#include <stdio.h>

void main()
{
	int l, c, colunas, linhas;
	
	printf("Digite a quantidade de colunas: ");
	scanf("%i", &colunas);
	
	printf("Digite a quantidade de linhas: ");
	scanf("%i", &linhas);
	
	for(l = 0; l < linhas; l++)
	{
		for (c = 0; c < colunas; c++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
