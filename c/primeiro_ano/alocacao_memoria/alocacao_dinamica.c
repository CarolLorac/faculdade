/*
ALOCAÇÃO DINÂMICA DE MEMÓRIA - malloc, realloc e free
Sites utilizados: https://www.ime.usp.br/~pf/algoritmos/aulas/aloca.html
				  https://www.cprogressivo.net/2013/04/Como-usar-a-funcao-malloc-para-alocar-memoria-em-linguagem-C.html
				  
Na alocação dinâmica, as alocações/determinações de espaço na memória das variáveis acontecem depois do programa ser executado (durante a execução).
Para utilizar essa funcionalidade, é necessário utilizar a biblioteca stdlib -> #include <stdlib.h>

Malloc(qtd_bytes) - aloca espaço para um bloco de bytes consecutivos na memória RAM e devolve o endereço (ponteiro) desse bloco
  char *ptr;
  ptr = malloc (1); // dentro do parenteses coloca a quantidade de bytes do bloco a ser alocado

Realloc(endereco_memoria, novo_tamanho) - altera o tamanho de um bloco de bytes (alocado anteriormente pelo malloc). A função aloca o novo bloco, 
copia para ele o conteúdo do bloco original, e devolve o endereço do novo bloco.
  ptr = realloc(ptr, 5); //altera o ponteiro ptr para ocupar 5 bytes na memória

Free(ponteiro) - libera/desaloca a memória ocupada pelo malloc
  free (ptr);  // esse exemplo e o do realloc é uma continuação do exemplo do malloc
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM_STRING 16 // Tamanho a ser alocado 
#define NOME "Sérgio Yoshioka" // String a ser copiada 

void main()
{
    char *str; //definição ponteiro para char
    
    str = malloc(TAM_STRING); //aloca na memória um bloco de 16 bytes 
    
    if (str == NULL) 
    {
        printf("Não há espaço suficiente para alocar memória\n");
    }
    else
    {
        strcpy(str, NOME); //Copia o conteúdo de NOME (Sérgio Yoshioka) e adiciona na variável str
        
        str = realloc(str, 2); // altera o tamanho do bloco de memória alocado pelo malloc
        //str = realloc(str, sizeof(NOME)); 
        
        printf("String = %s", str); 
        free(str); // libera memória alocada
        printf("\nString = %s", str); 
    }
}
