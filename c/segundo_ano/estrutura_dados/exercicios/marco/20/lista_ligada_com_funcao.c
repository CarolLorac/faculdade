//No código de lista ligada, exibir_lista a lista com função e construir função para novo elemento. 
//Também deve inserir elementos na lista até o usuário digitar valor negativo
#include <stdio.h>
#include <stdlib.h>

struct tipo_ligada 
{
    int num;
    struct tipo_ligada *proximo;
};

void exibir_lista(struct tipo_ligada *param);
struct tipo_ligada * inserir_elemento();

int main(void) 
{
    int num;
    struct tipo_ligada *head, *nova;
    head = NULL;

    do
    {
        printf("Digite um valor: ");
        scanf("%d", &num);

        if (num >= 0)
        {
            //só insere se o número for positivo ou igual a 0
            nova = inserir_elemento(&head);
            nova->num = num;
        }
    } while (num >= 0);

    //exibe os elementos da lista
    exibir_lista(head);

    return 0;
}

void exibir_lista(struct tipo_ligada *param)
{
    while(param != NULL)
    {
        printf("Valor: %d \n", param->num);
        param = param->proximo;
    }
}

struct tipo_ligada * inserir_elemento(struct tipo_ligada **param)
{
    struct tipo_ligada *aux;
    if (!(aux=malloc(sizeof(struct tipo_ligada)))) 
    {
        printf("Faltou memória!\n");
        exit(-1);
    }
    aux->proximo = *param;
    *param = aux;

    return aux;
}