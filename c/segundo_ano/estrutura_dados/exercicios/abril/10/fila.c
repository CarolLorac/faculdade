#include <stdio.h>
#include <stdlib.h>

struct tipo_no
{
    int num;
    struct tipo_no *proximo;
};

int isEmpty(struct tipo_no *paramInicio);
void inserir(struct tipo_no **paramInicio, struct tipo_no **paramFim, int valor);
int remover(struct tipo_no **paramInicio, struct tipo_no **paramFim);
void mostrarFila(struct tipo_no *paramFim);

void main()
{
    int i;
    struct tipo_no *inicio = NULL, *fim = NULL; //fila está vazia então os dois (inicio e fim) apontam para nulo

    for (i = 0; i < 6; i++)
    {
        inserir(&inicio, &fim, i);
    }

    printf("\nFila:");
    mostrarFila(fim);

    printf("\n\nRemovendo...(First in, first out)");
    while (isEmpty(fim) == 1)
    {
        int valorRemovido = remover(&inicio, &fim);
        printf("\nValor: %d", valorRemovido);
    }
}

void inserir(struct tipo_no **paramInicio, struct tipo_no **paramFim, int valor)
{
    struct tipo_no *novo;

    if (!(novo = malloc(sizeof(struct tipo_no))))
    {
        printf("Faltou memória!\n");    
        exit(1);
    }

    novo->num = valor;
    novo->proximo = *paramFim;
    *paramFim = novo;

    if (isEmpty(*paramInicio) == 0)
    {
        *paramInicio = novo;
    }
}

int isEmpty(struct tipo_no *paramInicio) //vazio = 0
{
    if (paramInicio == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void mostrarFila(struct tipo_no *paramFim)
{
    while(isEmpty(paramFim) == 1)
    {
        printf("\nValor: %d", paramFim->num);
        paramFim = paramFim->proximo;
    }
}

int remover(struct tipo_no **paramInicio, struct tipo_no **paramFim)
{
    struct tipo_no *remover;
    int valor;

    if (isEmpty(*paramInicio) == 0)
    {
        printf("Fila vazia!!");
        exit(2);
    }

    if (*paramInicio == *paramFim)
    {
        remover = *paramInicio;
        valor = remover->num;
        *paramInicio = NULL;
        *paramFim = NULL;
        free(remover);
        return valor;
    }

    remover = *paramFim; 
    while (remover->proximo != *paramInicio)
    {
        remover = remover->proximo;
    } 

    *paramInicio = remover;
    remover = remover->proximo;
    (*paramInicio)->proximo = NULL;
    valor = remover->num;
    free(remover);
    return valor;
}
