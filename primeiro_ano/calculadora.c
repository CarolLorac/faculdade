//Faça um programa que tenha as funções de uma calculadora

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float Somar (float a, float b)
{
	return a + b;
}

float Subtrair (float a, float b)
{
	return a - b;
}

float Multiplicar (float a, float b)
{
	return a * b;
}

float Dividir (float a, float b)
{
	if (b != 0)
	{
		return a/b;
	}
	else
	{
		printf("Erro!! O segundo número não pode ser 0 (zero).");
		return 0;
	}
}

float Potencia (float a, float b)
{
	float acumA = 1;
	
	
	for (float i = 0; i < b; i++)
	{
		acumA = acumA * a;
	}
	
	return acumA;
}

void main()
{
	int operacao;
	float a, b;
	char reiniciar = 'N';
	
	printf("CALCULADORA");
	printf("\n1 - Adicao");
	printf("\n2 - Subtracao");
	printf("\n3 - Multiplicacao");
	printf("\n4 - Divisao");
	printf("\n5 - Potenciacao");
	
	do
	{
		printf("\nEscolha a operacao que deseja: ");	
		scanf("%i", &operacao);
		
		if (operacao >= 1 && operacao <=4)
		{
			printf("Digite o primeiro numero: ");
			scanf("%f", &a);
			
			printf("Digite o segundo numero: ");
			scanf("%f", &b);
		}
		else if (operacao == 5)
		{
			printf("Digite o numero: ");
			scanf("%f", &a);
			
			printf("Digite o valor do expoente: ");
			scanf("%f", &b);
		}
		else 
		{
			printf("Essa operacao nao existe!!\n Deseja ir para calculadora novamente? (S - SIM | N - NAO)");
			scanf("%c", &reiniciar);
		}
		
	} while (reiniciar == 'S');
	
	if (operacao == 1)
	{
		printf("SOMA = %.2f", Somar(a, b));
	}
	else if (operacao == 2)
	{
		printf("SUBTRACAO = %.2f", Subtrair(a, b));
	}
	else if (operacao == 3)
	{
		printf("MULTIPLICACAO = %.2f", Multiplicar(a, b));
	}
	else if (operacao == 4)
	{
	    if (Dividir(a, b) != 0)
	    {
	        printf("DIVISAO = %.2f", Dividir(a, b));
	    }
	}
	else
	{
		printf("POTENCIACAO = %.2f", Potencia(a, b));
	}
}
