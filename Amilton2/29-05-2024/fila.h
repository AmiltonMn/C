#include <stdio.h>
#include <stdlib.h>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct Fila
{

    struct Fila *prev;
    int valor;

} Fila;


Fila push(Fila * fila, int * size)
{
    if (size == 0)
    {
        (*fila).prev = 0;
        (*size) ++;
        return (*fila);
    }

    (*fila).prev = fila;
    (*size) ++;
    return (*fila);

    
}

void pop()
{

}

#endif
