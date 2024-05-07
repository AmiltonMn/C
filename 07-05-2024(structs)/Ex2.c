#include <stdio.h>

typedef struct Ex2
{
    char name[10];
    int matriculation;
    char course[20];
} Aluno;

int main()
{
    Aluno alunos[5];
    for(int i = 0; i < sizeof(alunos)/sizeof(alunos[0]); i ++)
    {
        printf("Type the name of the %d student: ", i+1);
        scanf("%s", alunos[i].name);
        printf("Type the matriculation of the student %s: ", alunos[i].name);
        scanf("%d", &alunos[i].matriculation);
        printf("Type the course of the student %s: ", alunos[i].name);
        scanf("%s", alunos[i].course);
    }
    for(int i = 0; i < sizeof(alunos)/sizeof(alunos[0]); i ++)
    {
        printf("\tName: %s. Matriculation: %d. Course: %s.\n", alunos[i].name, alunos[i].matriculation, alunos[i].course);
    }
}