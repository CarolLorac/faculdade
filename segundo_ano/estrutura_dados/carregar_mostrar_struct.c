//Escreva um programa em C que crie um vetor de 6 posicaoições de struct aluno na função principal
//e crie uma função para carregar o vetor e outra para mostrar o vetor

#include <stdio.h>

struct aluno
{
    int ra;
    float nota;
};

void carregar(struct aluno param[], int tamanho);
void mostrar(struct aluno param[], int tamanho);

int main(void)
{
    struct aluno vet[6];

    carregar(vet, 6);
    mostrar(vet, 6);
    
    return 0;
}

void carregar(struct aluno param[], int tamanho)
{
    int posicao;
    for(posicao = 0; posicao < tamanho; posicao++)
    {
        printf("Digite o %d RA: ", posicao + 1);
        scanf("%d", &param[posicao].ra);
        printf("Digite a %d nota: ", posicao + 1);
        scanf("%f", &param[posicao].nota);
    }
}

void mostrar(struct aluno param[], int tamanho)
{
    int posicao;
    for(posicao = 0; posicao < tamanho; posicao++)
    {
        printf("\nRA: %d", param[posicao].ra);
        printf("\nNota: %.2f", param[posicao].nota);
    }
}

