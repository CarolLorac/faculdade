#include <stdio.h>
#include <stdlib.h>


void main()
{
	int l, c, i, j, index = 0, indexCaminho = 1, valorInicio = 0, valor, linhaInicio;
	int caminho[] = {};
	int proximo = 0; // 0 - false | 1 - true  
	int matriz[4][4]; 
	
	for (c = 0; c < 4; c++)
	{
	    for (l = 0; l < 4; l++)
	    {
	        matriz[l][c] = rand() % 5;
	    }
	}
    // matriz [linha][coluna]
    
    //int matriz[4][4] = {{8, 0, 0, 11,}, {0, 2, 0, 20,}, {0, 5, 3, 0,}, {4, 0, 1, 6,}}; //cada {} são linhas
	
	printf ("\n%i %i %i %i", matriz[0][0], matriz[0][1], matriz[0][2], matriz[0][3]);
	printf ("\n%i %i %i %i", matriz[1][0], matriz[1][1], matriz[1][2], matriz[1][3]);
	printf ("\n%i %i %i %i", matriz[2][0], matriz[2][1], matriz[2][2], matriz[2][3]);
	printf ("\n%i %i %i %i\n", matriz[3][0], matriz[3][1], matriz[3][2], matriz[3][3]);

	
	for (l = 0; l < 4; l++)
	{
		if (matriz[l][0] > 0)
		{
			valorInicio = matriz[l][0];
			linhaInicio = l;
			caminho[0] = valorInicio;
			
			break;
		}
	}
	
	if (valorInicio != 0)
	{
		for (c = 1; c < 4; c++)
		{
			for (l = linhaInicio; l < 4; l++)
			{	
				if (matriz[l - 1][c] != 0 && l > 0)
				{
					caminho[indexCaminho] = matriz[l - 1][c];
					
				    indexCaminho++;
				    linhaInicio = l - 1;
				    break;
				}					
			    else if (matriz[l][c] != 0)
				{
					caminho[indexCaminho] = matriz[l][c];
					
				    indexCaminho++;
				    linhaInicio = l;
				    break;
				}
				else if (matriz[l + 1][c] != 0 && l < 3)
				{
					caminho[indexCaminho] = matriz[l + 1][c];
					
				    indexCaminho++;
				    linhaInicio = l + 1;
				    break;
				}
				else { }
			}
		}
		
		printf("\nCAMINHO:");
		for (i = 0; i < indexCaminho; i++)
		{
			printf(" %i", caminho[i]);
		}
	}	
	else
	{
		printf("Nao tem valor para iniciar o caminho!!");
	}
}
