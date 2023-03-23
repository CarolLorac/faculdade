//Código que aloca um vetor dinâmico na memória

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, tam, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tam);

    //ponteiro vet recebe o endereço inicial da região de memória alocada:
    vet = malloc(tam * (sizeof(int)));
    // tam * sizeof(int) gera a quantidade de memória necessária para X(qtd digitada) inteiros

    if (vet) //se a alocação da certo, retorna true
    {
        printf("Memoria alocada com sucesso!\n");

        for (i = 0; i < tam; i++)
        {
            printf("%i ", *(vet + i)); //imprime o conteúdo dessa região da memória
        }
    }
    else 
    {
        printf("Erro ao alocar memoria");
    }

    return 0;
    
    //Quando para de rodar o programa, essas informações alocadas são apagadas?
    //sim
}