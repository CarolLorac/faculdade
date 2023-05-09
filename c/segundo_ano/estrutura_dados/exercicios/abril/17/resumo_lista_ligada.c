//Rev.3
//Inserir 5 variáveis dinâmicas com a estrutura 
//tipo_no e depois mostre os valores digitados pelo usuario
#include <stdio.h>
#include <stdlib.h>
struct tipo_no{
   int num;
   struct tipo_no *prox;
};
int main(void){
   int pos;	
   struct tipo_no *prim, *nova;
   prim = NULL;
   for( pos = 0; pos < 5; pos++ ){
      if(!(nova = malloc(sizeof(struct tipo_no)))){
         printf("Falta de memoria! \n");
         return -1;
      }
      printf("Digite o %d valor: ", pos+1);
      scanf("%d", &(nova->num) );
	  nova->prox = prim; //Insere novo no na lista ligada
	  prim = nova;   
   }
   //Passeio pela lista ligada
   nova = prim;
   while( nova != NULL){
      printf("Valor: %d \n", nova->num);
      nova = nova->prox;
   }
   return 0;  	
}
 
