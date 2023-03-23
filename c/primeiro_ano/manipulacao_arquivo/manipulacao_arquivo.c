/*
MANIPULA��O DE ARQUIVOS

fopen() - abre um arquivo
fclose() - fecha o arquivo garantindo a transfer�ncia do buffer
fflush() - descarrega o buffer
fscanf() - leitura de entrada formatada (semelhante ao scanf())
fprintf() - escrita de saida formatada (semelhante ao printf())
fgets() - obt�m/pega uma string do arquivo
fgetc() - obt�m/pega um caractere do arquivo
fputs() - insere uma string ao arquivo
fputc() - insere um caractere no arquivo
fread() - l� um bloco de dados do arquivo
fwrite() - escreve um bloco de dados no arquivo
fseek() - reposiona o ponteiro
rewind() - reposiciona o ponteiro para o inicio do arquivo
ftell() - retorna a posi��o do ponteiro


TIPOS DE ASSOCIA��O DE ARQUIVO (FOPEN)

Sintaxe:    
fopen (const char* arquivo, const char* modo)
arquivo - diret�rio/nome do arquivo a ser aberto
modo - tipo de associa��o que � feita

Tipos de associa��es:
"r" - abre o arquivo somente para leitura, a partir do inicio. O arquivo deve existir.
"w" - cria um arquivo vazio para escrita. Se j� havio o arquivo, ele � perdido.
"a" - adiciona no final do arquivoo. Se o arquivo n�o existir, a fun��o o cria.
"r+" - abre o arquivo somente para leitura e escrita, a partir do inicio. O arquivo deve existir.
"w+" - cria um arquivo vazio para leitura e escrita. Se j� havio o arquivo, ele � perdido.
"a+" - abre para adi��o ou leitura no final do arquivo. Se o arquivo n�o existir, a fun��o o cria.

*/

#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	FILE *file;  //deve-se usar FILE quando declarar um arquivo
	char frase[60];
	char texto[50];
	
	file = fopen("documento.txt", "r+"); //abre um arquivo para leitura e escrita
	
	if (file != NULL)
	{
		while(fgets(frase, 60, file) != NULL) //fgets pega as strings do arquivo e adiciona na variavel frase
		{
			printf("%s", frase);
		}
	}
	
	fputs("\nMe formo em 2026!!", file); //adiciona um texto no final do arquivo
	
	fclose(file); //fecha de maneira correta o arquivo
}
