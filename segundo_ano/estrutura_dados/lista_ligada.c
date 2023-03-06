//LISTA LIGADA - é utilizada quando não sabemos a quantidade, quando temos um tamanho dinâmico

#include <stdio.h>
#include <stdlib.h>

struct tipo_ligada //struct - estrutura
{
    int num;
    struct tipo_ligada *proximo;
    //vai criar uma estrutura assim : │num│apontador│ na memória
};
//-> é um referência, ex: animal.nome - você está referenciado/chamando o campo nome do animal

int main(void) //coloca esse void para indicar que realmente não tem parâmetro, se você nao coloca nada o programa pode se perder
{
    int posicao;
    struct tipo_ligada *primeiro, *nova;
    primeiro = NULL;

    for (posicao = 0; posicao < 5; posicao++)
    {
        if (!(nova=malloc(sizeof(struct tipo_ligada)))) //uma nova área é criada e o endereço de memória dela é adcionado na variavel nova
        {
            printf("Faltou memória!\n");
            return 1;
        }
        printf("Digite um valor: ");
        scanf("%d", &(nova->num));
        nova->proximo = primeiro;
        primeiro = nova;
    }
    nova = primeiro;
    while(nova != NULL)
    {
        printf("Valor: %d \n", nova->num); //nova.num (nova é um tipo_ligada) - está se referindo ao campo num
        nova = nova->proximo;  //dentro de nova está adicionando o apontador próximo
    }
    return 0;
}
