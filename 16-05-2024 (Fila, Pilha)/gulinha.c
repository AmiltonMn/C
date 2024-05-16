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
        max = rand() % 100;
    } else {
        max = rand() % 50;
    }

    for (int i = 0; i < rand() % max; i++)
    {
        pessoas += 1;
        enqueue(pessoas, size, fila);
    }

    return max;
}

int removerFila(int * fila, int * size)
{
    int maxSaida = rand() % 15;

    for (int i = 0; i < maxSaida; i++)
    {
        dequeue(fila, size);
    }

    return maxSaida;
}

int desistencia(int * fila, int * size)
{
    int maxDesiste = rand() % 5;

    for (int i = 0; i < maxDesiste; i++)
    {
        dequeue(fila, size);
    }
}

int main()
{
    int horario = 8, pessoas = 0, tam = 220, sizeFila = 0, flag = 1;
    srand(time(NULL));
    int * fila = definirFila(tam); 

    printf("SUPER HIPER MEGA MERCADO GULINHA\n");
    printf("Treinamento---------\n");

    while (flag != 0)
    {
        if (horario > 22 && sizeFila == 0)
        {
            printf("Fim da fila, programa encerrado!\n");
            break;
        }
        for (int i = 0; i < 10; i++)
        {
            Sleep(1);
            printf("%d Pessoas entraram na fila\n", adicionarFila(sizeFila, fila, pessoas, horario));
            printf("%d Pessoas finalizaram suas compras\n", removerFila(fila, sizeFila));
            printf("%d Pessoas desistiram\n", desistencia(fila, sizeFila));
        }

        horario += 1;
    }

    free(fila);

}