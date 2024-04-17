#include <stdio.h>

void criarMatriz(int numeros[][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("Digite o numero da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &numeros[i][j]);
        }
    }
}

void printarMatriz(int numeros[][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j ++)
        {
            printf("[%d]", numeros[i][j]);
        }
        printf("\n");
    }
}

void somarMatriz(int numeros[][4])
{
    int soma = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            soma = soma + numeros[i][j];
        }
    }
    printf("%d", soma);
}

int main()
{
    int numeros[4][4] = {{}};
    criarMatriz(numeros);
    printarMatriz(numeros);
    somarMatriz(numeros);
}