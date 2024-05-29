#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
    Fila * fila;
    Fila * atual;
    int size = 0;

    fila->valor = 13;

    fila->prev = 0;

    *fila = push(fila, &size);

    fila->valor = 22;

    *fila = push(fila, &size);

    for(int i = 0; i < 2; i ++)
    {
        atual = fila;
        printf("%d\n", atual->valor);
        printf("%d\n", atual->prev->valor);

    }

}