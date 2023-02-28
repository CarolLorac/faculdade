/*
PONTEIRO 
Site: https://www.ime.usp.br/~pf/algoritmos/aulas/pont.html#array

Um ponteiro � uma vari�vel que cont�m o endere�o de mem�ria de outra vari�vel. 
� muito utilizado em C porque permite que o c�digo seja mais compacto e eficiente.

SINTAXE DECLARA��O:
tipo_variavel *nome_ponteiro

ex: int *ptInt;  - ponteiro para vari�veis do tipo int
	void *ptGenerico;  - ponteiro gen�rico que aponta para qualquer tipo de vari�vel


UTILIZA��O - OPERADOR &:
O operador & fornece o endere�o de uma vari�vel.

ex:
int numero = 43;
int *ptNumero;

ptNumero = &numero;   - armazena em ptNumero o endere�o da vari�vel numero


OPERADOR * 
Serve para acessar o conte�do do endere�o do ponteiro, ou seja, o que tem armazenado no endere�o do ponteiro
*/


#include <stdio.h>
#include <stdlib.h>

void main()
{
	int x = 15;
	int *ptNumero;   //defini��o ponteiro para int
	int *ptCopia;
	
	ptNumero = &x;   //atribuindo ao ponteiro numero o endere�o de mem�ria da vari�vel x. 
	                 //A partir de agora, quando alterar o valor de ptNumero, vai alterar 
	                 //instantaneamente o valor de x j� que os dois possuem o mesmo endere�o de mem�ria,
	                 //ou seja, x e ptNumero v�o ter sempre o mesmo valor.
	
	*ptNumero = 999;
	
	//ptNumero - pega o endere�o de mem�ria
	//*ptNumero - pega o valor que esta no endere�o de mem�ria
	
	*ptCopia = *ptNumero;   //nesse caso, s� estou atribuindo o mesmo valor do ponteiro ptNumero no ponteiro ptCopia,
	                        //eles continuam com endere�os de me�ria diferentes - se quisesse que eles tivessem o mesmo
	                        //endere�o de mem�ria teria que fazer isso: ptCopia = ptNumero;
	*ptCopia += 10;
	
	printf("Valor x: %i", x);
	printf("\nValor ponteiro numero (ptNumero): %i", *ptNumero);
	printf("\nValor ponteiro copia (ptCopia): %i", *ptCopia);
	
	
	/*
	  Posi��es da mem�ria (artim�tica de endere�os):
		Se p � um ponteiro para algum elemento da mem�ria,
		ent�o p++ incrementa 1 para que aponte para o pr�ximo elemento, e
		p += n faz com que se aponte n elementos al�m da posi��o atual.
	*/
}
