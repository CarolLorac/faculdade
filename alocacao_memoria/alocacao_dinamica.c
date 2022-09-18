/*
ALOCAÇÃO DINÂMICA DE MEMÓRIA - malloc, realloc e free
Sites utilizados: https://www.ime.usp.br/~pf/algoritmos/aulas/aloca.html
				  https://www.cprogressivo.net/2013/04/Como-usar-a-funcao-malloc-para-alocar-memoria-em-linguagem-C.html
				  
Na alocação dinâmica, as alocações/determinações de espaço na memória das variáveis acontecem depois do programa ser executado (durante a execução).
Para utilizar essa funcionalidade, é necessário utilizar a biblioteca stdlib -> #include <stdlib.h>

Malloc() - aloca espaço para um bloco de bytes consecutivos na memória RAM e devolve o endereço (ponteiro) desse bloco
char *ptr;
ptr = malloc (1); // dentro do parenteses coloca a quantidade de bytes do bloco a ser alocado

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM_STRING 16 // Tamanho a ser alocado 
#define NOME "Sérgio Yoshioka" // String a ser copiada 

int main(void)
{
    char *str; // definição ponteiro para char
    
    str = malloc(TAM_STRING); //aloca na memória um bloco de 16 bytes 
    
    if (str == NULL) 
    {
        printf("Não há espaço suficiente para alocar memória\n");
    }
    else
    {
        strcpy(str, NOME); //Copia o conteúdo de NOME (Sérgio Yoshioka) e adiciona na variável str
        printf("\nString = %s", str); 
        free(str); // libera memória alocada
        printf("\nString = %s", str); 
    }
}
