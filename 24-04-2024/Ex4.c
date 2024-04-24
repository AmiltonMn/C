#include <stdio.h>
#include <stdlib.h>

int retornar(int * num)
{
    int * array = (int *)malloc(*num * sizeof(int));
    for(int i = 0; i < *num; i++)
    {
        array[i] = i + 1;
        printf("[%d]", array[i]);
    }
}

int main()
{
    int num = 0;
    printf("Digite o tamanho que voce quer para o vetor: \n");
    scanf("%d", &num);
    retornar(&num);
}