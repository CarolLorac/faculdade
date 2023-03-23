#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n0 vence 1 e 2");
	printf("\n1 vence 2 e 3");
	printf("\n2 vence 3 e 4");
	printf("\n3 vence 4 e 0");
	printf("\n4 vence 0 e 1");
	
	int mao1, mao2;

	printf("\n\n Digite número escolhido para primeira mão: ");
	scanf("%i", &mao1);

	printf("\nDigite número escolhido para segunda mão: ");
	scanf("%i", &mao2);

	if((mao1>= 0 && mao1<=4) && (mao2>= 0 && mao2<=4))
	{
	   	if(mao1 == mao2)
		{
	  	  printf("Empatou!!");
		}
		else if ((mao2 == mao1 + 1 || mao2 == mao1 + 2))
		{
	  	  printf("%i vanceu!!", mao1);
		}
		else if((mao1 == 3 && mao2 == 0) || (mao1 == 4 && mao2 == 0) || (mao1 == 4 && mao2 == 1))
		{
	  	  printf("%i vanceu!!", mao1);
		}
		else
		{
	  	  printf("%i venceu!!", mao2);
		}
	}

	
}

