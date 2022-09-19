/*
PONTEIRO 
Site: https://www.ime.usp.br/~pf/algoritmos/aulas/pont.html#array

Um ponteiro é uma variável que contém o endereço de memória de outra variável. 
É muito utilizado em C porque permite que o código seja mais compacto e eficiente.

SINTAXE DECLARAÇÃO:
tipo_variavel *nome_ponteiro

ex: int *ptInt;  - ponteiro para variáveis do tipo int
	void *ptGenerico;  - ponteiro genérico que aponta para qualquer tipo de variável


UTILIZAÇÃO - OPERADOR &:
O operador & fornece o endereço de uma variável.

ex:
int numero = 43;
int *ptNumero;

ptNumero = &numero;   - armazena em ptNumero o endereço da variável numero


OPERADOR * 
Serve para acessar o conteúdo do endereço do ponteiro, ou seja, o que tem armazenado no endereço do ponteiro
*/


#include <stdio.h>
#include <stdlib.h>

void main()
{
	int x = 15;
	int *ptNumero;   //definição ponteiro para int
	int *ptCopia;
	
	ptNumero = &x;   //atribuindo ao ponteiro numero o endereço de memória da variável x. 
	                 //A partir de agora, quando alterar o valor de ptNumero, vai alterar 
	                 //instantaneamente o valor de x já que os dois possuem o mesmo endereço de memória,
	                 //ou seja, x e ptNumero vão ter sempre o mesmo valor.
	
	*ptNumero = 999;
	
	//ptNumero - pega o endereço de memória
	//*ptNumero - pega o valor que esta no endereço de memória
	
	*ptCopia = *ptNumero;   //nesse caso, só estou atribuindo o mesmo valor do ponteiro ptNumero no ponteiro ptCopia,
	                        //eles continuam com endereços de meória diferentes - se quisesse que eles tivessem o mesmo
	                        //endereço de memória teria que fazer isso: ptCopia = ptNumero;
	*ptCopia += 10;
	
	printf("Valor x: %i", x);
	printf("\nValor ponteiro numero (ptNumero): %i", *ptNumero);
	printf("\nValor ponteiro copia (ptCopia): %i", *ptCopia);
	
	
	/*
	  Posições da memória (artimética de endereços):
		Se p é um ponteiro para algum elemento da memória,
		então p++ incrementa 1 para que aponte para o próximo elemento, e
		p += n faz com que se aponte n elementos além da posição atual.
	*/
}
