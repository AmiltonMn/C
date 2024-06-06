#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    int lista[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Pilha * pilha = (Pilha*)malloc(sizeof(Pilha));
    Pilha * atual;

    int size = 10;

    pilha = vetorToPilha(pilha, lista, size);

    atual = pilha;
    
    for(int i = 0; i < 10; i++)
    {
        printf("[%d]", atual -> valor);
        atual = atual -> prev;
    }
}