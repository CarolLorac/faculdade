//Escreva um programa em c que crie um vetor de 6 inteiros
//na funcão principal e crie uma função para carregar o vetor e outra para mostrar o vetor

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void carregar(int vetor[], int tamanho);
void mostrar(int vetor[], int tamanho);

int main(void)
{
	setlocale(LC_ALL, "portuguese");
    int vetor[6];

	/*
	ESSE CÓDIGO É EXTREMAMENTE ERRADO, QUANDO VOCÊ NÃO SABE O TAMANHO DO VETOR, TEM QUE USAR LISTA LIGADA E NÃO GAMBIARRA
	int tamanho;
    int vetor[tamanho];
    
    do
    {
    	printf("Digite o tamanho do vetor: ");
    	scanf("%i", &tamanho);
    	
    	if (tamanho <= 0)
    	{
    		printf("O tamanho deve ser um número inteiro positivo.\n");
		}
    	
	} while (tamanho <= 0);
    
	carregar(vetor, tamanho);
	mostrar(vetor, tamanho);*/
	
	carregar(vetor, 6);
	mostrar(vetor, 6);

	return 0;
}

void carregar(int vetor[], int tamanho)
{
	int i, valor;
	
	for (i = 0; i < tamanho; i++)
	{
		printf("Digite um valor: ");
		scanf("%i", &valor);
		vetor[i] = valor;
	}
}

void mostrar(int vetor[], int tamanho)
{
	int i;
	printf("Valores: \n");
	for (i = 0; i < tamanho; i++)
	{
		printf("%i \n", vetor[i]);
	}
}
