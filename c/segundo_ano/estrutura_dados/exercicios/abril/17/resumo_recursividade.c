//Escreva um programa que leia valores inteiros do teclado até o usuário digitar -1.
//Ao final do processamento mostre os números digitados usando função recursiva;

#include <stdio.h>
#include <stdlib.h>

struct lista_ligada
{
    int num;
    struct lista_ligada *proximo;
};

void mostrar_lista(struct lista_ligada *param);

int main(void)
{
    struct lista_ligada *head = NULL, *novo;
    int valor = 0;

    while (valor != -1)
    {
        printf("Digite um valor: ");
        scanf("%i", &valor);

        if (valor != -1)
        {
            if (!(novo = malloc(sizeof(struct lista_ligada))))
            {
                printf("Faltou memória!");
                return 1;
            }

            novo->num = valor;
            novo->proximo = head;
            head = novo;
        }
    }

    mostrar_lista(head);

    return 0;
}

void mostrar_lista(struct lista_ligada *param)
{
    if (param == NULL)
    {
        return;
    }
    printf("\nValor: %d", param->num);
    mostrar_lista(param->proximo);
}

//condição de parada
//exibição
//chamar função 