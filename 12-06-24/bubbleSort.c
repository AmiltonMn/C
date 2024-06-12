#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int list[], int size)
{
    int maior = 0;
        
    maior = list[0];

    for(int i = 0; i < size - 1; i ++)
    {
        for(int j = 0; j < size - 1; j ++)
        {
            if(list[j] > list[j + 1])
            {
                maior = list[j];
                list[j] = list[j + 1];
                list[j + 1] = maior;
            }
        }
    }
}

int main()
{
    int tamanho = 0;

    printf("Qual o tamanho da lista?\n");
    scanf("%d", &tamanho);

    int * lista = (int *)malloc(sizeof(int)*tamanho);

    for(int i = 0; i < tamanho; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &lista[i]);
    }

    printf("Lista Desordenada: ");

    for(int i = 0; i < tamanho; i ++)
    {
        printf("[%d]", lista[i]);
    }

    printf("\n");

    bubbleSort(lista, tamanho);

    printf("\n");

    printf("Lista Ordenada: ");

    for(int i = 0; i < tamanho; i ++)
    {
        printf("[%d]", lista[i]);
    }

    free(lista);
}