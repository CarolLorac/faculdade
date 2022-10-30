/*
Escreva um programa que leia o conteúdo um arquivo de texto e:

a. imprima apenas as palavras começadas pelas letras 'a' ou 'A'.
b. calcula a frequência de vogais
c. calcula o percentual de vogais no arquivo.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	FILE *file;
	int qtdLetraA = 0, qtdLetra = 0, qtdVogal = 0, i;    
	float porcentagemVogal;   
	char frase[100], c, letra;                                      
	
	file = fopen("documento.txt", "r"); //abre o arquivo .txt
	
	if (file != NULL)
	{	
		while ((c=fgetc(file)) != EOF) //pega cada letra do arquivo | EOF - significa 'end of file'
		{
			printf("%c", c); //printa cada caracterer, mostrando no fim todo o texto do arquivo 
			
			letra = tolower(c); //coloca caracter em letra minúscula
			
			if (letra == 'a')
			{
				qtdLetraA++;
			}
			
			if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' ||  letra == 'u')
			{
				qtdVogal++;
			}
			
			qtdLetra++;
		}
	}
	fclose(file); //fecha arquivo
	
	porcentagemVogal = (qtdVogal * 100)/qtdLetra;
	
	printf("\n\n-------------------------------------------");
    printf("\nA - Existem %i letras a/A no arquivo.", qtdLetraA);
    printf("\nB - Existem %i vogais no arquivo.", qtdVogal);
	printf("\n  - Existem %i letras no arquivo.", qtdLetra);
    printf("\nC - %.2f porcento dos caracteres no arquivo são vogais.", porcentagemVogal);
}
