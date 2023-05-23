//Faça uma função para somar os nós da árvore
#include <stdio.h>
#include <stdlib.h>

struct tipoNo
{ 
   int valor;
   struct tipoNo *esquerda, *direita;
};

struct tipoNo* criaNo (int vlr);
int somarValorNos(struct tipoNo *pai);

int main(void)
{
   int pos, num, qtdNumeros, ordemExibicao;
   struct tipoNo *arv = NULL, *pai = NULL, *filho = NULL; 

   printf("Digite a quantidade de nos: ");
   scanf("%d", &qtdNumeros);

   //Carrega a arvore
   for( pos = 0; pos < qtdNumeros; pos++){
      printf("Digite um numero: ");
      scanf("%d", &num);     
      pai = arv;
      filho = arv;
      while( (filho != NULL) && (num != filho->valor) ){
         pai = filho;
         if( num < pai->valor ){
            printf("Desce pela esquerda - num: %d e no: %d\n", num, pai->valor);
            filho = pai->esquerda;
         }else{
            printf("Desce pela direita - no: %d e num: %d\n", pai->valor, num);
            filho = pai->direita;
         }
      }
      //Aqui chegou no final da arvore ou valor esta duplicado
      if( arv == NULL )
      {
         printf("Cria a raiz\n");
         arv = criaNo( num );
         if( arv == NULL )
         {
            return 0; //FALSE
         }
      }
      else if( (filho != NULL) && (num == filho->valor) )
      {
         printf( "O valor %d esta repetido.\n", num);
      }
      else
      {
         if( num < pai->valor )
         {
            printf("Cria filho a esquerda\n");
            pai->esquerda = criaNo( num );
            if( pai->esquerda == NULL )
            {
               return 0; //FALSE
               scanf("%d", &num);
            }
         }
         else
         {
            printf("Cria filho a direita\n");
            pai->direita = criaNo( num );
            if( pai->direita == NULL )
            {
               return 0; //FALSE
               scanf("%d", &num);
            }
         }
      }
   }

   printf("Soma dos valores dos nós: %d", somarValorNos(pai));
   
   return 0;   
}

struct tipoNo* criaNo (int vlr)
{
   struct tipoNo *noAux;   
   noAux = (struct tipoNo*) malloc(sizeof(struct tipoNo)); 
   if( noAux == NULL )
   {
      printf( "Faltou memoria para alocar o no!\n");  
      return NULL;
   }

   noAux->valor = vlr; 
   noAux->esquerda = NULL; 
   noAux->direita = NULL;
   return noAux; 
};

int somarValorNos(struct tipoNo *pai)
{
    if(pai != NULL)
    {
        return pai->valor + somarValorNos(pai->direita) + somarValorNos(pai->esquerda);
    }
    return 0;
};

