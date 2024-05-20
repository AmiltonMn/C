#include <stdio.h>
#include <stdlib.h>

void realocarPilha(int * pilha, int * tam)
{
    realloc(pilha, (*tam) * sizeof(int));
    return (*tam);
}

int push(int valor, int * pilha, int * size, int * tam)
{

    if (size >= tam)
    {
        (*tam) *= 2;
        realocarPilha(pilha, &tam);
    }

    printf("Adicionando valor!\n");

    pilha[(*size)] = valor;

    printf("Valor adicionado!\n");

    return (*size)++;
}

int top(int * pilha, int size)
{
    printf("Ultimo valor adicionado: [%d]\n", pilha[size - 1]);
}

int pop(int * pilha, int * size)
{
    printf("Removendo ultimo valor adicionado: %d\n", pilha[(* size) - 1]);
    
    pilha[(*size) - 1] = NULL;

    printf("Valor removido!\n");

    return (*size) --;
}

int mostrarPilha(int * pilha, int size)
{
    for (int i = 0; i < size; i ++)
    {
        printf("Valor %d: [%d]\n", i + 1, pilha[i]);
    }
}

int main()
{
    int tam = 1, escolha = 1, valor = 0, size = 0;
    int * pilha = (int *)malloc(sizeof(int) * tam);
    
    while (escolha != 0)
    {
        printf("Digite um valor para adicionar!\n");

        scanf("%d", &valor);

        push(valor, pilha, &size, &tam);

        top(pilha, size);

        pop(pilha, &size);

        mostrarPilha(pilha, size);

        printf("Size: %d\n", size);

        printf("Deseja sair ou adicionar mais um valor?\n(Aperte 0 para sair e 1 para adicionar outro valor)\n");

        scanf("%d", &escolha);
    }
    
    free(pilha);

    return 0;
}