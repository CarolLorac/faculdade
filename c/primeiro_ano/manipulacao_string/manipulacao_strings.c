/*
MANIPULAÇÃO DE STRINGS

- biblioteca <string.h> :

strcpy(str1, str2) - copia o conteúdo da str2 e adiciona na str1
strcat(str1, str2) - insere no final de str1 o conteúdo de str2
strcmp(str1, str2) - compara str1 com str2. Devolve 0 se forem iguais,
											negativo se str1 for menor que str2 e
											positivo se str1 for maior que str2
strncmp(str1, str2, n) - igual ao strcmp, mas compara somente os n primeiros caracteres
strlen(str1) - devolve o tamanho (qtd caracteres) da string str1
strstr(str1, str2) - devolve ponteiro para a primeira ocorrência/acontecimento de str2 em str1. Se não encontrar, devolve NULL
strchr(str1, caracteree) - -devolve ponteiro para a primeira ocorrência do caractere em str1. Se não encontrar, devolve NULL

- biblioteca <ctype.h> :

Funções booleanas (sempre devolve 0 para dizer "não" ou inteiro diferente de 0 para dizer "sim"): 
isspace(c) - verifica se o caractere é em branco (white-space), ou seja, tab (\t), nova linha (\n), tab vertical, \v ou \f
isupper(c) - verifica se o caractere está em letra maiúscula 
islower(c) - verifica se o caractere está em letra minúscula
isdigit(c) - verifica se o caractere é um numero (0 1 2 3 ...)
isalpha(c) - verifica se o caractere é uma letra (maiuscula ou minuscula)
isalnum(c) - verifica se o caractere é uma letra ou um número
ispunct(c) - verifica se o caractere é um caractere de pontuação (! " * + - < = > { ] ~ entre outros)

Funções de conversão 
toupper(c) - converte para letra maiúscula
tolower(C) - converte para letra minúscula

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
		printf("\n\nO QUE VOCÊ DESEJA SABER?");
		printf("\na) O tamanho de cada string lida");
		printf("\nb) Se as strings são iguais");
		printf("\nc) Se uma das strings está contida na outra");
		printf("\nd) Se todos os caracteres de uma string são números");
		printf("\ne) Se alguma das strings está com todos os caracteres em maiúsculo ou em minúsculo");
		printf("\nf) Transformar as strings em maiúsculo");
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
