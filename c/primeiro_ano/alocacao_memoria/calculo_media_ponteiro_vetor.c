//Fa�a um programa que calcule a m�dia das notas utilizando vetor e ponteiro
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int *ptNotas;
	int vetorNotas[5];
	int notaTotal = 0, i, tamanhoVetor;
	float media;
	
	tamanhoVetor = sizeof(vetorNotas)/sizeof(vetorNotas[0]);
	
	for (i = 0; i < tamanhoVetor; i++)
	{
		printf("Digite a %i nota: ", i+1);
		scanf("%d", &vetorNotas[i]);
	}
	
	ptNotas = &vetorNotas; //atribuindo o mesmo endere�o de memoria do vetor ao ponteiro
	
	for (i = 0; i < tamanhoVetor; i++)
	{
		notaTotal += (ptNotas + i); //(ptNotas + i) � a mesma coisa q vetor[i]
		//notaTotal = notaTotal + *(ptNotas + i); 
	}
	
	media = notaTotal/tamanhoVetor;
	
	printf("\nA média final é %.2f", media);
}
