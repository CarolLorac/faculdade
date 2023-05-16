#include <stdio.h>
#include <stdlib.h>

struct tipoNo
{ 
   int valor;
   struct tipoNo *esquerda, *direita;
};

struct tipoNo* criaNo (int vlr);
void mostraArvPreOrdem (struct tipoNo *pai);
void mostraArvEmOrdem (struct tipoNo *pai);
void mostraArvPosOrdem (struct tipoNo *pai);

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

   do
   {
      printf("\n\nEscolha a maneira que deseja exibir a arvore: ");
      printf("\n0 - sair");
      printf("\n1 - pre-ordem");
      printf("\n2 - ordem");
      printf("\n3 - pos-ordem\n");
      scanf ("%d", &ordemExibicao);

      switch (ordemExibicao)
      {
         case 1:
            mostraArvPreOrdem(arv);
            break;
         case 2:
            mostraArvEmOrdem(arv);
            break;
         case 3:
            mostraArvPosOrdem(arv);
            break;
         default:
            break;
      }

   } while (ordemExibicao != 0);
   
   return 0;   
}

struct tipoNo* criaNo (int vlr)
{
   struct tipoNo *noAux;    //Declara um apontador para novo no
   noAux = (struct tipoNo*) malloc(sizeof(struct tipoNo)); //Aloca memoria para o novo no
   if( noAux == NULL )
   {
      printf( "Faltou memoria para alocar o no!\n");  //Nao conseguiu alocar memoria
      return NULL;
   }

   noAux->valor = vlr; //Registra o valor recebido
   noAux->esquerda = NULL; //Marca este No como sendo o unico da arvore
   noAux->direita = NULL;
   return noAux; //Se chegou ateh aqui eh porque foi tudo bem
};

void mostraArvPreOrdem (struct tipoNo *pai)
{
   if (pai != NULL)
   {
      printf("\n%d", pai->valor);
      mostraArvPreOrdem(pai->esquerda);
      mostraArvPreOrdem(pai->direita);
   }
}

void mostraArvEmOrdem (struct tipoNo *pai)
{
   if( pai != NULL ){
      mostraArvEmOrdem( pai->esquerda);
      printf("\n%d", pai->valor);
      mostraArvEmOrdem( pai->direita);
   }
}

void mostraArvPosOrdem (struct tipoNo *pai)
{
   if (pai != NULL)
   {
      mostraArvPosOrdem(pai->esquerda);
      mostraArvPosOrdem(pai->direita);
      printf("\n%d", pai->valor);
   }
}