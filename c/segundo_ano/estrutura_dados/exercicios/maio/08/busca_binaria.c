#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int vetor[], int inic, int fim, int chave);

int main(void)
{
    int vet[10], i, num, retorno;

    for (i = 0; i < 10; i++)
    {
        vet[i] = i;
    }

    printf("Digite o numero que deseja encontrar: ");
    scanf("%i", &num);

    retorno = buscaBinaria(vet, vet[0], vet[9], num);
    printf("%i", retorno);
}

int buscaBinaria(int vetor[], int inic, int fim, int chave)
{
    int sup = fim - 1;
    int meio;

    while(inic <= sup)
    {
        meio = (inic + sup)/2;

        if (chave == vetor[meio])
        {
            return meio;
        }

        if (chave < vetor[meio])
        {
            sup = meio - 1;
        }
        else 
        {
            inic = meio + 1;
        }
    }
    return -1;
}