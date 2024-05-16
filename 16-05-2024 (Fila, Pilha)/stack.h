#ifndef FUNCTIONS_I
#define FUNCTIONS_I

#include <stdio.h>
#include <stdlib.h>

int * definirStack(int tam)
{
    int * stack = (int *)malloc(sizeof(int) * tam);

    return stack;
}


void push(int * stack, int * size, int value)
{   
    realloc(stack, sizeof(int) * ((*size) + 3));

    stack[(*size)] = value;
    (*size) ++;
}

void pop(int * stack, int * size)
{
    stack[(*size)-1] = NULL;
    (*size) --;
}

int top(int * stack, int * size)
{
    return stack[(*size)-1];
}

#endif 
