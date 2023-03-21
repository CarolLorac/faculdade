//Ordenação de vetor e tempo gosto

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/timeb.h>
#include <stdbool.h>

#define False 0   //False = zero
#define True 1    //True = qualquer valor diferente de zero

void bubble_sort(int vet[], int tamanho);
void mostrar_vet( int vet[], int tamanho );
void selection_sort(int vet[], int tamanho);

int main(void) {
   struct timeb start, end;
   int contador, vetor1[50000], vetor2[50000], dif;
	       
   for(contador = 0; contador < 50000; contador++) //adiciona 50000 números randômicos nos vetores
   {
      vetor1[contador] = rand();
      vetor2[contador] = rand(); 
   }
   
   ftime(&start);
   bubble_sort(vetor1, 50000);
   ftime(&end);
   dif = (int) (1000.0 * (end.time - start.time) + (end.millitm - start.millitm));
   printf("\nTempo gasto [bubble_sort]: %d ms.\n", dif);

   ftime(&start);
   bubble_sort(vetor1, 50000);
   ftime(&end);
   dif = (int)(1000.0 * (end.time - start.time) + (end.millitm - start.millitm));
   printf("\nTempo gasto ordenado [bubble_sort]: %d ms.\n", dif);

   ftime(&start);
   selection_sort(vetor2, 50000);
   ftime(&end);
   dif = (int) (1000.0 * (end.time - start.time) + (end.millitm - start.millitm));
   printf("\nTempo gasto [selection_sort]: %d ms.\n", dif);

   ftime(&start);
   selection_sort(vetor2, 50000);
   ftime(&end);
   dif = (int)(1000.0 * (end.time - start.time) + (end.millitm - start.millitm));
   printf("\nTempo gasto ordenado [selection_sort]: %d ms.\n", dif);


   mostrar_vet(vetor1, 20);
 
   return 0;
}

void mostrar_vet( int vet[], int tamanho )
{
   int pos;
   for( pos = 0; pos < tamanho; pos++ )
   {
      printf("%d, ", vet[pos] );
   }
   printf("...\n");
}

void bubble_sort (int vet[], int tamanho)
{
   bool register trocar = True;
   int register n, aux;

   while (trocar)
   {
      trocar = false;

      for (n = 0; n < tamanho - 1; n++)
      {
         if (vet[n+1] < vet[n])
         {
            trocar = true;
            aux = vet[n+1];
            vet[n+1] = vet[n];
            vet[n] = aux;
         }
      }
   }
}

void selection_sort(int vet[], int tamanho)
{
   int register ext_N, int_N, aux; //register - faz o programa rodar na memória cache (é um cálculo mais rápido e não precisa ser alocado)

   for( ext_N = 0; ext_N < tamanho-1; ext_N++)
   {
      for( int_N = ext_N+1; int_N < tamanho; int_N++)
      {
         if( vet[ext_N] > vet[int_N])
         {
            aux = vet[ext_N];
            vet[ext_N] = vet[int_N];
            vet[int_N] = aux;
		 }
	  }
   }
}

