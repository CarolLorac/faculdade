#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa
{
    char nome[50];
    int idade;
    float peso;
};

struct Endereco
{
    char cidade[60];
    int cep;
};

int main(void)
{
    int i, tamanhoVetor;

    //formas de inicialização: 
    struct Pessoa pessoa1 = {"Carol", 19, 60.5};

    struct Pessoa pessoa2 = {
        .nome = "Henrique",
        .idade = 43,
        .peso = 100
    };

    //array de struct
    struct Endereco enderecos[10];
    tamanhoVetor = sizeof(enderecos);

    for (i = 0; i < tamanhoVetor; i++)
    {
        enderecos[i].cep = 10 + i;
        strcpy(enderecos[i].cidade, "Paulinia");
        //enderecos[i].cidade[0] = "Paulinia"; - assim não funciona
    };

    printf("A %s tem %i anos.", pessoa1.nome, pessoa1.idade);
    printf("\nO %s pesa %.2f quilos.", pessoa2.nome, pessoa2.peso);
    for (i = 0; i < tamanhoVetor; i++)
    {
        printf("\n%i", enderecos[i].cep);
        printf("\n%s", enderecos[i].cidade);
    }

    return 0;
}