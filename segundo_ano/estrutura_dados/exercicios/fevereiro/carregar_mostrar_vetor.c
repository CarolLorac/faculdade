//Escreva um programa em C que crie um vetor de 6 posições de inteiros na função principal
//e crie uma função para carregar o vetor e outra para mostrar o vetor

#include <stdio.h>

void carregar (int param[], int tamanho);
void mostrar (int param[], int tamanho);

int main(void)
{
    int vet[6];

    carregar(vet, 6);
    mostrar(vet, 6);

    return 0;
}

void Carregar (int param[], int tamanho)
{
    int posicao;
    for (posicao = 0; posicao < tamanho; posicao++)
    {
        printf("Valor [%d]: ", posicao+1);
        scanf("%d", &param[posicao]);
    }
}

void Mostrar (int param[], int tamanho)
{
    int posicao;

    for (posicao = 0; posicao < tamanho; posicao++)
    {
        printf("\nValor: %d", param[posicao]);
    }
}