//Informar quanto tempo o usuário precisa digitar um número.

#include <stdio.h>
#include <time.h> //TIME.H
#include <sys/timeb.h>

int main(void)
{
    struct timeb inicio, fim;
    int num, dif;
    printf("Digite um número: ");
    ftime(&inicio);
    scanf("%d", &num);
    ftime(&fim);
    dif = (int)(1000 * (fim.time - inicio.time) + (fim.millitm - inicio.millitm));
    printf("Tempo gasto: %d ms", dif);
    return 0;
}