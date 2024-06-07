#include <stdio.h>
#include <stdlib.h>

int ordenar(int vetor[], int tamanho)
{
    int k = 0;
    int menor;

    for(int i = 0; i < tamanho; i++)
    {
        k = i;
    
        for(int j = i; j >= 0; j--)
        {
            if(vetor[k]<vetor[j])
            {
                menor = vetor[k];
                vetor[k] = vetor[j];
                vetor[j] = menor;
                k --;
            }
        }
    }
}

int main()
{
    int tamanho;

    printf("Digite o tamanho da lista:\n");
    scanf("%d", &tamanho);

    int * vetor = (int*)malloc(sizeof(int)*tamanho);

    for(int i = 0; i < tamanho; i++)
    {
        printf("Digite o %d numero:", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Forma desordenada:");

    for(int i = 0; i < tamanho; i++)
    {
        printf("[%d]", vetor[i]);
    }

    printf("\n");
    ordenar(vetor, tamanho);

    printf("Forma ordenada:");

    for(int i = 0; i < tamanho; i++)
    {
        printf("[%d]", vetor[i]);
    }

    free(vetor);

    return 0;
}