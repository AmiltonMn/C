#include <stdio.h>
#include <stdlib.h>
#ifndef PILHA.H
#define PILHA.H


typedef struct Pilha
{
    struct Pilha *prev;
    int valor;
} Pilha;

Pilha *push(Pilha * pilha, int valor)
{
    Pilha * novo = (Pilha*)malloc(sizeof(pilha));
    novo -> valor = valor;
    novo -> prev = pilha;

    return novo;
}

Pilha *pop(Pilha * pilha)
{
    if(pilha->prev)
    {
        Pilha *temp = pilha->prev;
        free(pilha);
        return temp;
    }

    pilha->valor = 0;
    pilha->prev = NULL;

    return pilha;
}

int top(Pilha * pilha)
{
    return pilha->valor;
}

Pilha *pilhaToVetor(Pilha * pilha, int list[], int size)
{
    Pilha * atual;

    atual = pilha;

    for(int i = 0; i < size; i++)
    {
        list[i] = atual->valor;

        atual = atual->prev;
    }

    return list;
}

Pilha *vetorToPilha(Pilha * pilha, int list[], int size)
{
    for(int i = 0; i < size; i++)
    {
        pilha = push(pilha, list[i]);
    }

    return pilha;
}

#endif