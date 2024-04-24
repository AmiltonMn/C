#include <stdio.h>
#ifndef functions_h
#define FUNCTIONS_h

int mostrarMatriz()
{
    int matriz[10];
    for(int i = 0; i < 10; i++)
    {
        matriz[i] = i+1;
        printf("[%d]", matriz[i]);
    }
}

#endif