//É uma boa prática de programação deixar o main em cima, ou seja, no começo do arquivo. 
//Mas para evitar erros em relação as outras funções, tem que fazer um re-definicao de cada nova funcao

#include <stdio.h>

void func(int p1, int *p2); //é como se fosse uma pré-definição 

int main(void) 
{
    int n1 = 3, n2 =5;
    printf("Valores: %d e %d", n1, n2);
    func(n1, &n2); //no n2, estou passando o endereço de memória dele
    printf("");
}