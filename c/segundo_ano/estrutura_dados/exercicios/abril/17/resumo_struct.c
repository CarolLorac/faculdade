/*
Escreva um programa em C para ler o RA e a nota de 12 alunos. Não deve ser usada lista ligada. As notas 
devem estar entre 0 e 10. Ao final do processamento, mostre as notas e os RA's
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

struct aluno
{
    int ra;
    float nota;
};

int main(void)
{
    struct aluno alunos[3];
    int i;
    float nota;

    for (i = 0; i < 3; i++)
    {
        printf("\nDigite do %i aluno: ", i + 1);
        printf("\nRA: ");
        scanf("%i", &alunos[i].ra);

        do 
        {
            printf("Nota: ");
            scanf("%f", &nota);

            if (nota > 10 || nota < 0)
            {
                printf("Valor inválido! A nota deve ser menor que 10 e maior que 0.\n");
            }
        } while (nota > 10 || nota < 0);

        alunos[i].nota = nota;
    }

    printf("\nALUNO");
    for (i = 0; i < 3; i++)
    {
        printf("\nRA: %i", alunos[i].ra);
        printf("\nNota: %-1f", alunos[i].nota);
    }

    return 0;
}