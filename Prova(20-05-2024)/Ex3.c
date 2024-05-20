#include <stdio.h>
#include <stdlib.h>

int realocarFila(int * fila, int * tam)
{
    (*tam) *= 2;

    realloc(fila, sizeof(int) * (*tam));

    return (*tam);
}

int enqueue(int * fila, int * size, int valor, int * tam)
{
    if (size >= (*tam))
    {
        realocarFila(fila, &tam);
    }

    printf("Adicionando valor!\n");

    fila[(*size)] = valor;

    printf("Valor adicionado!\n");

    return (*size) ++;
}

int dequeue(int * fila, int * size)
{
    printf("Removendo primeiro item da fila!\n");

    fila[0] = fila[1];

    printf("Reorganizando a fila!\n");

    (*size) --;

    for (int i = 1; i < (*size) - 1; i ++)
    {
        fila[i] = fila[i + 1];
    }

    return (*size);
}

void mostrarFila(int * fila, int size)
{
    if (size == 0)
    {
        printf("A fila esta vazia!\n");
        
        return NULL;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Item %d da fila: [%d]\n", i + 1, fila[i]);
    }
}

int main()
{
    int tam = 1, escolha = 1, valor = 0, size = 0;
    int * fila = (int *)malloc(tam * sizeof(int));

    while (escolha != 0)
    {
        printf("Digite um valor para adicionar!\n");

        scanf("%d", &valor);

        enqueue(fila, &size, valor, &tam);

        printf("Size: %d\n", size);

        mostrarFila(fila, size);

        dequeue(fila, &size);

        mostrarFila(fila, size);

        printf("Deseja sair ou adicionar mais um valor?\n(Aperte 0 para sair e 1 para adicionar outro valor)\n");

        scanf("%d", &escolha);
    }
    
    free(fila);

    return 0;
}