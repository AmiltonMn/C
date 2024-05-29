#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "fila.h"


int adicionarFila(int * size, int * fila, int * pessoas, int horario)
{
    int max = 0;

    if (horario >= 17 && horario <= 22)
    {
        max = rand() % 50;
    } else {
        max = rand() % 35;
    }

    for (int i = 0; i < max; i++)
    {
        (*pessoas) += 1;

        enqueue((*pessoas), size, fila);
    }

    return max;
}

int removerFila(int * fila, int * size, int * pessoas, int horario)
{
    int maxSaida = rand() % 20;

    if (maxSaida > (*pessoas) && horario > 22)
    {
        maxSaida = (*pessoas)/2;
    }

    if (horario < 22)
    {
        for (int i = 0; i < maxSaida; i++)
        {
            dequeue(fila, size);
            (*pessoas) --;
        }
    } else if (horario > 22) {

        maxSaida = rand() % 60;

        if (maxSaida > (*pessoas))
        {
            maxSaida = (*pessoas);
        }

        for (int i = 0; i < maxSaida; i++)
        {
            dequeue(fila, size);

            (*pessoas) --;
        }
    }

    return maxSaida;
}

int desistencia(int * fila, int * size, int * pessoas, int horario)
{
    int maxDesiste = rand() % 10;

    if (maxDesiste > (*pessoas) && horario > 22)
    {
        maxDesiste = rand() % ((*pessoas)/2);
    }

    for (int i = 0; i < maxDesiste; i++)
    {
        dequeue(fila, size);
        (*pessoas) --;
    }

    return maxDesiste;
}

int main()
{
    int horario = 8, pessoas = 0, tam = 100, sizeFila = 0, flag = 1, dia = 1;
    srand(time(NULL));
    int * fila = definirFila(tam); 

    printf("SUPER HIPER MEGA MERCADO GULINHA\n");
    printf("Treinamento---------\n");

    while (flag != 0)
    {

       if (horario < 24) {
            Sleep(500);

            printf("Pessoas dentro do mercado: %d\n", pessoas);

            printf("Dia: %d\n", dia);

            printf("Horario: %d\n", horario);

            if (horario < 22 && dia <= 1)
            {
                printf("%d Pessoas entraram na fila\n", adicionarFila(&sizeFila, fila, &pessoas, horario));
            }

            printf("%d Pessoas finalizaram suas compras\n", removerFila(fila, &sizeFila, &pessoas, horario));

            printf("%d Pessoas desistiram\n\n", desistencia(fila, &sizeFila, &pessoas, horario));

            horario ++;

            if (horario == 24)
            {
                dia ++;
                horario = 0;
            }

            if (dia > 1 && horario > 2)
            {
                printf("%d pessoas foram expulsas do mercado!\n", pessoas);
                flag = 0;
            }
        } 

        if (horario >= 22 && pessoas <= 0)
        {
            printf("Fim da fila, programa encerrado!\n");

            flag = 0;

            break;
        }
    }

    free(fila);

}