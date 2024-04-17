#include <stdio.h>

int adicionarNotas(float notas[][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Digite a nota %d do aluno:\n", j+1);
            scanf("%f", &notas[i][j]);
        }
        printf("--------PROXIMO ALUNO-------\n");
    }
}

int mediasNotas(float media, float notas[][3], float medias[][1])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            media = media + notas[i][j];
        }
    medias[i][0] = media/3;
    media = 0;
    }
}

int printarMatriz(float medias[][1])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 1; j ++)
        {
            printf("%.2f\n", medias[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    float notas[3][3] = {{}};
    float medias[3][1] = {{}}, media = 0;
    adicionarNotas(notas);
    mediasNotas(media, notas, medias);
    printarMatriz(medias);
}
