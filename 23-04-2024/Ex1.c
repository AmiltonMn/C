#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;
    printf("Quantos numeros voce quer colocar na lista?\n");
    scanf("%d", &numero);
    int * numeros = (int *)malloc(numero * sizeof(int));
    for(int i = 0; i < numero; i++)
    {
        printf("Digite o numero:\n");
        scanf("%d", &numeros[i]);
    }
    for(int i = 0; i < numero; i++)
    {
        printf("[%d]", numeros[i]);
    }
}