//Revisão 3 - estourar a memória
#include <stdio.h>
#include <stdlib.h>

struct tipo_simples
{
    float num[10000]; //10.000
};

int main(void)
{
    int qtd = 0;
    struct tipo_simples *repo;

    while (1 == 1)
    {
        if(!(repo = malloc(sizeof(struct tipo_simples))))
        {
            printf("Faltou memoria");
            return 1;
        }

        qtd++;
        printf("Quantidade: %i \n", qtd);
    } 
    return 0;
}