#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
    int size = 0;
    Fila * atual;
    Fila * fila = (Fila*)malloc(sizeof(Fila));

    int num = 21;

    *fila = push(fila, &size, num);

    num = 22;

    *fila = push(fila, &size, num);

    num = 23;

    *fila = push(fila, &size, num);

    num = 24;

    *fila = push(fila, &size, num);

    num = 25;

    *fila = push(fila, &size, num);

    num = 26;

    *fila = push(fila, &size, num);

    pop(fila);

    atual = fila;

    for(int i = 0; i < size; i ++)
    {

        printf("Atual: %d\n", atual->valor);
        printf("Anterior: %d\n", atual->prev->valor);

        atual = atual->next;
    }

    free(fila);
    free(atual);
}