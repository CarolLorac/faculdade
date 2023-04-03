//Escreva um programa em c que crie um struct de 3 inteiros 
//na funcão principal e crie uma função para carregar o vetor e outra para mostrar o vetor

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct aluno
{
	int ra;
	char nome[30];
};

void carregar(struct aluno vetor[], int tamanho);
void mostrar(struct aluno vetor[], int tamanho);

int main(void)
{
	int tamanho;
	struct aluno vetor[3]; //pq quando é vetor da certo e com struct não?
	
	carregar(vetor, 3);
	mostrar(vetor, 3);
	
	return 0;
}

void carregar(struct aluno vetor[], int tamanho)
{
	int i;
	
	for (i = 0; i < tamanho; i++)
	{
		printf("Digite o nome do %i aluno: ", i + 1);
		scanf("%s", &vetor[i].nome); //quando usar . ou -> qual é amis adequado de se usar?
		printf("Digite o RA do %s: ", vetor[i].nome);
		scanf("%i", &vetor[i].ra);
	}
}

void mostrar(struct aluno vetor[], int tamanho)
{
	int i;
	
	for (i = 0; i < tamanho; i++)
	{
		printf("\nNome: %s", vetor[i].nome);
		printf("\nRA: %i", vetor[i].ra);
	}
}