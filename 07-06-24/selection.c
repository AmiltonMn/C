#include <stdio.h>
#include <stdlib.h>

void ordenar(int vetor[], int tamanho)
{
    int menor = 0;
    int pos = 0;

    for(int i = 0; i < tamanho; i++)
    {
        menor = vetor[i];
        pos = 0;

        for(int j = i; j <= tamanho; j++)
        {
            if(j == tamanho)
            {
                vetor[tamanho] = vetor[i];
                break;
            }

            if(vetor[j] < menor)
            {
                menor = vetor[j];
                pos = j;
            } 
        }

        printf("Valor do menor: %d\n", menor);
        printf("Valor de pos: %d\n", pos);

        if(pos != 0)
        {
            vetor[pos] = vetor[i];
        }

        if(i <= tamanho)
        {
            vetor[i] = menor;
        }
    }
}

int main()
{
    int tamanho = 0;

    printf("Digite o tamanho da lista!\n");
    scanf("%d", &tamanho);

    int * vetor = (int *)malloc(sizeof(int)*tamanho);


    for(int i = 0; i < tamanho; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Forma desordenada: ");

    for(int i = 0; i < tamanho; i++)
    {
        printf("[%d]", vetor[i]);
    }

    printf("\n");

    ordenar(vetor, tamanho);
    printf("Forma ordenada: ");

    for(int i = 0; i < tamanho; i++)
    {
        printf("[%d]", vetor[i]);
    }
} 