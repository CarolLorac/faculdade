#include <stdio.h>
#include <stdlib.h>


void main()
{
	int l, c, i, index = 0, indexCaminho = 0, valorInicio = 0;
	int lista[16]; //números diferentes de 0
	int caminho[] = {};
	int continuar = 1, proximo = 0; // 0 - false | 1 - true  
	
	int matriz[4][4] = {{1, 2, 0, 0,},
						{0, 2, 5, 0,},
						{3, 0, 4, 0,},
						{10, 20, 3, 6,}}; //cada {} são colunas
						
	
	
	
	for (c = 0; c < 4; c++)
	{
		for (l = 0; l < 4; l++)
		{ 
			if (matriz[c][l] != 0)
			{
				printf("%i - [%i][%i]\n", matriz[c][l], c, l);
				lista[index] = matriz[c][l];
				index ++;
			}
		}
	}
	
	for (l = 0; l < 4; l++)
	{
		if (matriz[0][l] != 0)
		{
			valorInicio = matriz[0][l];
		}
	}
	
	
	while (continuar == 1 )
	{
		for (c = 0; c < 4; c++)
		{
			for (l = 0; l < 4; l++)
			{
				if ((matriz[l - 1][c +1] != 0) ||
				     (matriz[l + 1][c +1] != 0) ||
				     (matriz[l][c +1] != 0))
				{
					caminho[indexCaminho] = matriz[c][l];
					
				    indexCaminho++;
				    proximo = 1;
				}
				
				if (proximo == 1)
				{
					break;
				}
			}
			
			if (c == 3)
			{
				continuar = 0;
			}
		}
	}
	
	for (i = 0; i < index; i++)
	{
		printf("\n%i", lista[i]);
	}
	
	printf("\n\nCAMINHO:");
	for (i = 0; i < indexCaminho; i++)
	{
		printf("%i ", caminho[i]);
	}
}
