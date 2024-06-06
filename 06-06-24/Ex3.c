#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    int list[10];
    Pilha * pilha = (Pilha*)malloc(sizeof(Pilha));
    Pilha * atual;

    int size = 10;

    for(int i = 0; i < size; i++)
    {
        pilha = push(pilha, i);
    }

    pilhaToVetor(pilha, list, 10);

    atual = pilha;
    
    for(int i = 0; i < 10; i++)
    {
        printf("[%d]", atual -> valor);
        atual = atual -> prev;
    }
}