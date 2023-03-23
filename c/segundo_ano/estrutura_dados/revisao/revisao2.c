//revisao 2: revisão de variaveis e controles de repeticoes
//Desenhe um triangulo retangulo de asteriscos (*) na tela sendo que o usuario deve digitar o tamanho.
//Exemplo usuário pedindo 4:
//*
//* *
//* * * 
//* * * * 
#include <stdio.h>

void main()
{
    int qtd, i, j;

    printf("Digite o tamanho: ");
    scanf("%i", &qtd);

    for(i = 1; i <= qtd; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}