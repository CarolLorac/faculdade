#include <stdio.h>
#include <stdlib.h>

struct tipo_no
{
    int num;
    struct tipo_no *proximo;
};

int isEmpty(struct tipo_no *param); //0 - vazio
int top(struct tipo_no *param); //passagem por valor
int pop(struct tipo_no **param); //passagem por referência
int push(struct tipo_no **param, int valor); //passagem por referência

int main(void)
{
    int i;
    struct tipo_no *pilha = NULL;

    for (i = 0; i < 6; i++)
    {
        push(&pilha, i);  //quando a passagem é por referencia, tem que passar o endereço (ou seja, usar &)
    }

    printf("Elementos lista:"); 
    while(isEmpty(pilha) == 1)
    {
        printf("\n%i", pop(&pilha)); //exibe os elementos que estãos sendo exibidos
    }

    return 0;
}

int isEmpty(struct tipo_no *param) //verifica se está vazio
{
    if (param == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int top(struct tipo_no *param) //retorna o topo da pilha
{
    if (param == NULL)
    {
        printf("Lista vazia!!");
        exit(1); //retorna 1 para saber onde deu o erro - isso ajuda na hora de corrigir
    }
    return param->num;
}

//se a passagem foi por valor (*param), dentro da função vc usa só param (só o nome) - exemplo acima
//se a passagem foi por referência (**param), durante a função vc usa *param (* e nome) - exemplo abaixo

int push(struct tipo_no **param, int valor) //adiciona elemento na pilha
{
    struct tipo_no *novo; //aponta para a nova área de memoria

    if (!(novo = malloc(sizeof(struct tipo_no))))//novo recebe uma alocação de memória do tamanho de uma struct tipo_no
    {
        printf("Faltou memória.\n");
        exit(2); 
    }
    novo->num = valor;
    novo->proximo = *param;
    *param = novo;

    //nessa lógica, no momento que estamos inserindo, o próximo é o endereço do anterior, mas ele é chamado de próximo pq já
    //que é uma pilha, eu tiro do último elemento ao primeiro, então temos q olhar como se estivessemos desempilhando 
}

int pop(struct tipo_no **param) //remove elemento (topo) da pilha
{
    struct tipo_no *remover;
    int valor;

    if (*param == NULL)
    {
        printf("Lista vazia!!");
        exit(3);
    }
    remover = *param;
    valor = remover->num; //precisa dessa linha para retornar o elemento removido
    *param = remover->proximo; //altera o topo da pilha (deixa de ser o param e vira o prox)
    free(remover); //libera a memória, ou seja, apaga o struct remover
    return valor;
}