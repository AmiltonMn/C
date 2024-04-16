#include <stdio.h>
#include <string.h>

int main()
{
    char nomesAlunos[5][50] = {{}}, nome[50] = "";
    int qtdNotas = 0, qtdAlunos = 0, qtdDisci = 0;
    float notas[5][10] = {{}};

    printf("Quantos alunos voce quer adicionar?(Com um maximo de 5 alunos)\n");
    scanf("%d", &qtdAlunos);
    printf("Quantas notas voce quer registrar por aluno?\n");
    scanf("%d", &qtdNotas);
    printf("Quantas disciplinas voce quer adicionar notas?\n");
    scanf("%d", &qtdDisci);
    for(int i = 0; i < qtdAlunos; i++)
    {
        printf("Digite o nome do aluno:\n");
        scanf("%s", nomesAlunos[i]);
        for(int j = 0; j < qtdNotas; j++)
        {
            printf("Digite a nota do aluno: ");
            scanf("%f", &notas[i][j]);
        }
    }
    for(int i = 0; i < qtdDisci; i++)
    {
        printf("     Disciplina %d ", i+1);
    }
    for(int i = 0; i < qtdAlunos; i++)
    {
        printf("\n%s  ", nomesAlunos[i]);
        for(int j = 0; j < qtdNotas; j++)
        {
            printf("%f  ", notas[i][j]);
        }
    }
}
