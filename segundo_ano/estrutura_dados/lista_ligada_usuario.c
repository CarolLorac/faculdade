
#include <stdio.h>
#include <stdlib.h>

struct tipo_ligada 
{
    int num;
    struct tipo_ligada *proximo;
};

int main(void) 
{
    int valor_aux;
    struct tipo_ligada *primeiro, *nova;
    primeiro = NULL;

    do
    {
        if (!(nova=malloc(sizeof(struct tipo_ligada)))) 
        {
            printf("Faltou memória!\n");
            return 1;
        }

        printf("Digite um valor: ");
        scanf("%d", &valor_aux);

        if(valor_aux >= 0)
        {
            nova->num = valor_aux;
            nova->proximo = primeiro;
            primeiro = nova;
        }
    } while (valor_aux >= 0);
    
    nova = primeiro;
    while(nova != NULL)
    {
        printf("Valor: %d \n", nova->num); 
        nova = nova->proximo;
    }
    return 0;
}