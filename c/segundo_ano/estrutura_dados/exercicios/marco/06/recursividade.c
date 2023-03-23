#include <stdio.h>
#include <stdlib.h>

float fatorial (float valor)
{
    if (valor < 1)
    {
        return -1;
    }
    if (valor == 1)
    {
        return 1;
    }

    return valor * fatorial(valor - 1);
}

int main(void)
{
    float valor;

    printf("Digite o valor que deseja saber o fatorial: ");
    scanf("%f", &valor);

    printf("Resultado: %.2f", fatorial(valor));
    return 0;
}