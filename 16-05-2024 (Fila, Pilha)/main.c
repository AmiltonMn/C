#include <stdio.h>
#include "fila.h"
#include "stack.h"

int main()
{
    int sizeFila = 0, tam = 0, value = 0, sizePilha = 0, a = 0;

    // Fila

    printf("Digite o tamanho da fila\n");
    scanf("%d", &tam);
    int * fila  = definirFila(tam);

    for (int i = 0; i < tam; i++)
    {
        printf("Digite o valor %d da fila\n", i + 1);
        scanf("%d", &value);
        enqueue(value, &sizeFila, fila);
    }

    printf("Tamanho da fila: %d\n", sizeFila);

    for (int i = 0; i < tam; i++)
    {
        printf("[%d]", fila[i]);
    }

    printf("\n");

    for (int i = 0; i < tam; i++)
    {
        printf("O valor %d esta sendo retirado!\n", fila[i]);
        dequeue(fila, &sizeFila);

        for (int j = 0; j < sizeFila; j++)
        {
            printf("[%d]", fila[j]);
        }
        printf("\n");
    }

    free(fila);

    // Pilha

    printf("Digite o tamanho da pilha:\n");
    scanf("%d", &tam);
    int * stack = definirStack(tam);

    for (int i = 0; i < tam; i ++)
    {
        printf("Digite o valor %d do stack\n", i + 1);
        scanf("%d", &value);
        push(stack, &sizePilha, value);
    }

    for (int i = 0; i < tam; i++)
    {
        printf("[%d]", stack[i]);
    }

    printf("\n");

    for (int i = 0; i < tam; i++)
    {
        printf("O valor %d esta sendo retirado!\n", stack[sizePilha-1]);
        pop(stack, &sizePilha);
        printf("Item no topo: %d\n", top(stack, &sizePilha));

        for (int j = 0; j < sizePilha; j ++)
        {
            if (sizePilha == 1)
            {
                printf("Todos os numeros ja foram excluidos!\n");
                return 0;
            }
            printf("[%d]", stack[j]);
        }

        printf("\n");
    }

    free(stack);                                                                
}
