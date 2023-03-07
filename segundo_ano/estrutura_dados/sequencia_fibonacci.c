//De acordo com a sequência de Fibonacci, um numero é o resultado da soma de seus 2 antecessores,
//ex: fibo (posicao)  1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 ...
//    posicao         1  2  3  4  5  6  7   8   9   10  11 ...

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int posicao)
{
    if (posicao == 1 || posicao == 2)
    {
        return 1;
    }

    return fibonacci(posicao - 1) + fibonacci(posicao - 2);
}

int main(void)
{
    int posicao;

    printf("Digite a posicao desejada: ");
    scanf("%i", &posicao);

    printf("%i", fibonacci(posicao));
}