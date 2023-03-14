//Carregar vetor de 50.000 inteiros randomicamente

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    struct timeb inicio, fim;
    int posicao, tamanho = 50000, dif;
    int vet[tamanho];

    ftime(&inicio);
    for(posicao = 0; posicao < tamanho; posicao++)
    {
        vet[posicao] = rand;
    }
    ftime(&fim);
    dif = (int)(1000 * (fim.time - inicio.time) + (fim.millitm - inicio.millitm));
    printf("Tempo: %d ms\n", dif);
    for (posicao = 0; posicao < 20; posicao++)
    {
        printf("%d \n", vet[posicao]);
    }
    return 0;
}