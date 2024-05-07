#include <stdio.h>

typedef struct Ex4
{
    int matricula;
    char nome[20];
    int disciplina;
    float nota1, nota2;
    float media;
} Alunos;

int main()
{
    Alunos alunos[10];

    for (int i = 0; i < 10; i ++)
    {
        printf("Digite o nome do aluno: \n");
        scanf("%s", alunos[i].nome);

        printf("Digite o numero da matricula do aluno: \n");
        scanf("%d", &alunos[i].matricula);

        printf("Digite o numero da disciplina do aluno: \n");
        scanf("%d", &alunos[i].disciplina);

        printf("Digite a primeira nota do aluno: \n");
        scanf("%f", &alunos[i].nota1);

        printf("Digite a segunda nota do aluno: \n");
        scanf("%f", &alunos[i].nota2);

        alunos[i].media = (alunos[i].nota1 + (alunos[i].nota2 * 2)) / 3; 
    }

    for(int i = 0; i < 10; i++)
    {
        printf("Nome: %s. Media: %.1f\n", alunos[i].nome, alunos[i].media);    
    }
}
