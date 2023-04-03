//Escreva um programa em c que crie um vetor inteiro
//na funcão principal e crie uma função para carregar o vetor e outra para mostrar o vetor

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void carregar(int vetor[], int tamanho);
void mostrar(int vetor[], int tamanho);

int main(void)
{
	setlocale(LC_ALL, "portuguese");
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
	mostrar(vetor, tamanho);
	
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
