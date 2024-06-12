#include <stdio.h>
#include <stdlib.h>

void mergeSort(int list[], int size)
{
    int part1 = 0, part2 = 0, k = 0;

    int * list1 = (int *)malloc(sizeof(int)*size/2), *list2 = (int *)malloc(sizeof(int)*size - size/2);

    part2 = size/2;

    if (size > 1)
    {
        printf("Separando: \n\n\n");
        for(int i = part1; i < part2; i++)
        {
            list1[i] = list[i]; 
        }

        printf("Lista 1: ");

        for(int i = 0; i < part2; i ++)
        {
            printf("[%d]", list1[i]);
        }

        printf("\n");

        for(int j = part2; j < size; j ++)
        {
            list2[k] = list[j];
            k ++;
        }

        printf("Lista 2: ");

        for(int i = 0; i < part2; i ++)
        {
            printf("[%d]", list2[i]);
        }

        printf("\n");

        mergeSort(list1, size/2);
        mergeSort(list2, size - size/2);

        printf("Ordenando: \n\n\n");

        int pos1 = 0, pos2 = 0;

        for(int i = 0; i < size; i++)
        {
            if ((list1[pos1] < list2[pos2] && pos1 < size / 2) || pos2 >= size - size / 2)
            {
                list[i] = list1[pos1];
                printf("Item da lista 1 menor que a lista 2: %d\n", list[i]);
                pos1 ++;
            } else {
                list[i] = list2[pos2];
                printf("Item da lista 2 menor que a lista 1: %d\n", list[i]);
                pos2 ++;
            }
        }

        printf("Lista ordenada no momento: \n\n\n");

        for(int i = 0; i < size; i ++)
        {
            printf("[%d]", list[i]);
        }

        printf("\n");
    }

    free(list1);
    free(list2);
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

    mergeSort(lista, tamanho);

    printf("\n");

    printf("Lista Ordenada: ");

    for(int i = 0; i < tamanho; i ++)
    {
        printf("[%d]", lista[i]);
    }

    free(lista);
}