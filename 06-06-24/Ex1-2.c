#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    Pilha * pilha = (Pilha*)malloc(sizeof(Pilha));

    for(int i = 0; i < 10; i++)
    {
        pilha = push(pilha, i);
    }

    Pilha * atual = pilha;
    
    for(int i = 0; i < 10; i++)
    {
        printf("[%d]", atual -> valor);
        atual = atual -> prev;
    }

    printf("[%d]", top(pilha));

}