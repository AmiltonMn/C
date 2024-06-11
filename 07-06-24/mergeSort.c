#include <stdio.h>
#include <stdlib.h>

int * mergeSort(int list[], int size)
{
    int menor = 0;
    int * list1 = (int *)malloc(sizeof(int)*size), * list2 = (int *)malloc(sizeof(int)*size);

    if (size > 1)
    {
        list1 = mergeSort(list, size/2);
        list2 = mergeSort(list, size - size/2);
    }

    printf("Primeiro item da lista 1: %d\n", list1[0]);
    printf("Primeiro item da lista 2: %d\n", list2[0]);


    for(int i = 0; i < size/2; i ++)
    {
        if(list1[i] > list1[i + 1])
        {
            menor = list1[i + 1];

            list1[i + 1] = list1[i];
            list1[i] = menor;
        }
    }
    
    for(int i = 0; i < size/2; i ++)
    {
        if(list2[i] > list2[i + 1])
        {
            menor = list2[i + 1];

            list2[i + 1] = list2[i];
            list2[i] = menor;
        }
    }

    printf("Lista 1:");

    for(int i = 0; i < size; i ++)
    {
        printf("[%d]", list1[i]);
    }

    printf("\n");

    printf("Lista 2:");

    for(int i = 0; i < size; i ++)
    {
        printf("[%d]", list2[i]);
    }

    printf("\n");

    return list;
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
}