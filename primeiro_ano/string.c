//Fazer um programa leia uma string que represente um número de zero a dez e converta para o respectivo número e devolva
//a quantidade de caracteres. Por xemplo: DEZ 10  3 caracteres

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //permite usar strlen 

void main()
{
	char numero[6];
	int qtdCaracteres, valorNumero, reiniciar = 1;
	
	do
	{
	    printf("\nDigite o numero (em extenso) que deseja converter: ");
        scanf("%s", numero);
        
        /*for (int i = 0; numero[i] != "\0"; i++)
        {
            numero[i] = tolower(numero[i]);
        }*/
        
        qtdCaracteres = strlen(numero);
        
        switch (qtdCaracteres)
        {
        	case 2:
        	    if (strcmp("um", numero) == 0) // 0 indica que os valores são iguais
        	    {
        	        valorNumero = 1;
        		    break;
        	    }
        	    
        	case 3:
        		if (strcmp("dez", numero) == 0)
        		{
        		    valorNumero = 10;
        		    break;
        		}
        		
        	case 4:
        		if (numero[0] == 's')
        		{
        			if (strcmp("seis", numero) == 0)
        			{
        			    valorNumero = 6;
        				break;
        			}
        			if (strcmp("sete", numero) == 0)
        			{
        			    valorNumero = 7;
        				break;
        			}
        		}
        		
        		if (strcmp("dois", numero) == 0)
        		{
        		    valorNumero = 2;
        		    break;
        		}
        			
        		if (strcmp("tres", numero) == 0)
        		{
        		    valorNumero = 3;
        		    break;
        		}
        			
        		if (strcmp("oito", numero) == 0)
        		{
        		    valorNumero = 8;
        		    break;
        		}
        			
        		if (strcmp("nove", numero) == 0)
        		{
        		    valorNumero = 9;
        			break;
        		}
        		
        	case 5:
        	    if (strcmp("cinco", numero) == 0)
        	    {
        	        valorNumero = 5;
        		    break;
        	    }
        	    
        	case 6:
        	    if (strcmp("quatro", numero) == 0)
        	    {
        	        valorNumero = 4;
        	        break;
        	    }
        	    
        	default:
        	    printf("Esse valor não existe no intervalo determinado.");
        }
        
        printf("\nNúmero (extenso): %s", numero);
        if (valorNumero >= 0 && valorNumero <= 10)
        {
            printf("\nNúmero (inteiro): %i", valorNumero);
        }
        printf("\nQuantidade caracteres: %i", qtdCaracteres);   
        
        
        printf("\nDeseja reiniciar? (0 - NÃO | 1 - SIM)");
        scanf("%i", &reiniciar);
        
	} while (reiniciar == 1);
}
