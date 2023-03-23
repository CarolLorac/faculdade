/*
MANIPULA��O DE STRINGS

- biblioteca <string.h> :

strcpy(str1, str2) - copia o conte�do da str2 e adiciona na str1
strcat(str1, str2) - insere no final de str1 o conte�do de str2
strcmp(str1, str2) - compara str1 com str2. Devolve 0 se forem iguais,
											negativo se str1 for menor que str2 e
											positivo se str1 for maior que str2
strncmp(str1, str2, n) - igual ao strcmp, mas compara somente os n primeiros caracteres
strlen(str1) - devolve o tamanho (qtd caracteres) da string str1
strstr(str1, str2) - devolve ponteiro para a primeira ocorr�ncia/acontecimento de str2 em str1. Se n�o encontrar, devolve NULL
strchr(str1, caracteree) - -devolve ponteiro para a primeira ocorr�ncia do caractere em str1. Se n�o encontrar, devolve NULL

- biblioteca <ctype.h> :

Fun��es booleanas (sempre devolve 0 para dizer "n�o" ou inteiro diferente de 0 para dizer "sim"): 
isspace(c) - verifica se o caractere � em branco (white-space), ou seja, tab (\t), nova linha (\n), tab vertical, \v ou \f
isupper(c) - verifica se o caractere est� em letra mai�scula 
islower(c) - verifica se o caractere est� em letra min�scula
isdigit(c) - verifica se o caractere � um numero (0 1 2 3 ...)
isalpha(c) - verifica se o caractere � uma letra (maiuscula ou minuscula)
isalnum(c) - verifica se o caractere � uma letra ou um n�mero
ispunct(c) - verifica se o caractere � um caractere de pontua��o (! " * + - < = > { ] ~ entre outros)

Fun��es de convers�o 
toupper(c) - converte para letra mai�scula
tolower(C) - converte para letra min�scula

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main()
{
	setlocale (LC_ALL, "Portuguese");
	
	char str1[20], str2[20], opcao;
	
	do 
	{
		printf("\n\nO QUE VOC� DESEJA SABER?");
		printf("\na) O tamanho de cada string lida");
		printf("\nb) Se as strings s�o iguais");
		printf("\nc) Se uma das strings est� contida na outra");
		printf("\nd) Se todos os caracteres de uma string s�o n�meros");
		printf("\ne) Se alguma das strings est� com todos os caracteres em mai�sculo ou em min�sculo");
		printf("\nf) Transformar as strings em mai�sculo");
		printf("\ng) Finalizar");
		
		printf("\nDigite somente a letra:");
		scanf("%c", &opcao);
		
		printf("Digite a primeira string: ");
		scanf("%s", &str1);
		printf("\nDigite a segunda string: ");
		scanf("%s", &str2);
		
		if (strcmp(opcao, "a"))
		{
			printf("\n%i", strlen(str1));
			printf("\n%i", strlen(str2));
		}
		
	} while (opcao != "g");
}
