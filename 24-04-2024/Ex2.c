#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[4][4];
    int * vetor = (int *)malloc(sizeof(numeros)/sizeof(int)); 
    int k = 0;
    for(int i = 0; i < 4; i ++)
    {
        for(int j = 0; j < 4; j ++)
        {
            printf("Digite um numero!\n");
            scanf("%d", &numeros[i][j]);
        }
    }
    for(int i = 0; i < 4; i++)
    {
        for(int j =0; j < 4; j++)
        {
            printf("[%d] ", numeros[i][j]);
        }
        printf("\n");
    }
    printf("Matriz simplificada no vetor:\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            vetor[k] = numeros[i][j];
            printf("[%d]", vetor[k]);
            k ++;
        }
    }
    printf("\n");
    int len = sizeof(vetor)*sizeof(int);
    for(int i = 0; i < len; i++)
    {
        printf("[%d]", vetor[i]);
    }
}