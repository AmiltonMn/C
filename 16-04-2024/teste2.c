#include <stdio.h>

int main(void)
{
    int matriz[3][3];

    for (int i = 0;i < 3; i++)
    {
        printf("Numero da linha: %d\n", i);
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o numero do indice [%d][%d]\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    printf("Matriz completa: \n");
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
}