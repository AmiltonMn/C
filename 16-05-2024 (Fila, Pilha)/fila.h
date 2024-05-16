#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>


int * definirFila(int tam)
{
    int * fila = (int *)malloc(sizeof(int)*tam);

    return fila;
}

int enqueue(int value, int * size, int * fila)
{
    fila[*size] = value;
    (*size) ++;
}

int dequeue(int * fila, int * sizeFila)
{

    for (int i = 0; i < (*sizeFila) - 1; i++)
    {
        fila[i] = fila[i + 1];
    }

    (*sizeFila) --;
}
#endif