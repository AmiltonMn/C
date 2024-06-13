#include <stdio.h>
#include <stdlib.h>

void QuickSort(int list [], int low, int high)
{
    if(low < high)
    {
        int pivot = list[low];
        int posMenor = low, troca = 0;
        for(int i = low + 1; i <= high; i++)
        {
            printf("Pivot do I%d: %d\n", i, pivot);
            if(list[i] < pivot)
            {
                posMenor ++;
                troca = list[posMenor];
                list[posMenor] = list[i];
                list[i] = troca;
            }
        }

        list[low] = list[posMenor];
        list[posMenor] = pivot;

        QuickSort(list, low, posMenor - 1);
        QuickSort(list, posMenor + 1, high);
    }
}

int main()
{
    int tamanho = 10;
    int list[10] = {5, 11, 9, 10, 1, 3, 12, 8, 13, 22};

    QuickSort(list, 0, tamanho - 1);
    for(int i = 0; i < tamanho; i ++)
    {
        printf("[%d]", list[i]);
    }
}