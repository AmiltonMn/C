#include <stdio.h>
#include <stdlib.h>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct Fila
{

    struct Fila *prev;
    struct Fila *next;
    int valor;

} Fila;


Fila push(Fila * fila, int * size, int num)
{
    Fila *novoNo = (Fila*)malloc(sizeof(Fila));
    Fila *atual;

    atual = fila;

    if ((*size) == 0)
    {
        fila->valor = num;
        fila->prev = fila;
        fila->prev->valor = 0;
        fila->next = NULL;
        (*size) ++;
        return (*fila);
    }

    for(int i = 0; i < (*size); i ++)
    {
        if(atual->next==NULL)
        {
            novoNo -> valor = num;
            novoNo->next = NULL;
            novoNo->prev = atual;
            atual->next = novoNo;
            break;
        }

        atual = atual->next;
    }

    (*size) ++;
    return (*fila);
}

void pop(Fila * fila)
{
    Fila * tirar = fila;
    fila = fila->next;
    tirar = NULL;
}

#endif