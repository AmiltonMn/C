#include <stdio.h>
#include <time.h>

void somarMatrizes(int matrizesSomadas[][2], int matriz1[][2], int matriz2[][2])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            matrizesSomadas[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void printarMatriz1(int matriz[][1])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j ++)
        {
            printf("[%d]\n", matriz[i][j]);
        }
        printf("\n");
    }
}
void printarMatriz2(int matriz[][1])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j ++)
        {
            printf("[%d]\n", matriz[i][j]);
        }
        printf("\n");
    }
}
void printarMatriz3(int matriz[][1])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j ++)
        {
            printf("[%d]\n", matriz[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int matriz1[3][2] =
    {
        {1,2},
        {3,4},
        {5,6}
    };
    int matriz2[3][2] =
    {
        {7,8},
        {9,3},
        {2,1}
    };
    int matrizesSomadas[3][2] = {{}};
    printf("Carregando a soma das matrizes.");
    for(int i = 0; i < 5; i++)
    {
        sleep(1);
        printf(".");
    }
    somarMatrizes(matrizesSomadas, matriz1, matriz2);
    printf("\n");
    printf("Primeira matriz original:\n");
    printarMatriz1(matriz1);
    printf("Segunda matriz original:\n");
    printarMatriz2(matriz2);
    printf("Matrizes Somadas:\n");
    printarMatriz3(matrizesSomadas);
}