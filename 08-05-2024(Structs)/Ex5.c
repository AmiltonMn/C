#include <stdio.h>

typedef struct Ex5
{
    char nome[30];
    int idade;
    char sex[2];
    char cpf[14];
    char dataNasc[11];
    int setor;
    char cargo[20];
    int salario;
} Empregados;

int main()
{
    FILE * arquivo;
    Empregados Empregados[2];
    for(int i = 0; i < 2; i ++)
    {
        printf("Digite o nome do empregado: ");
        scanf("%s", Empregados[i].nome);

        printf("Digite a idade do empregado: ");
        scanf("%d", &Empregados[i].idade);

        printf("Digite o sexo do empregado: ");
        scanf("%s", Empregados[i].sex);

        printf("Digite o CPF do empregado: ");
        scanf("%s", Empregados[i].cpf);

        printf("Digite a data de nascimento do empregado: ");
        scanf("%s", &Empregados[i].dataNasc);

        printf("Digite o numero do setor do empregado: ");
        scanf("%d", &Empregados[i].setor);

        printf("Digite o cargo do empregado: ");
        scanf("%s", Empregados[i].cargo);

        printf("Digite o salario do empregado: ");
        scanf("%d", &Empregados[i].salario);
    }

    arquivo = fopen("empregados.txt", "a");
    printf("Lista de Empregados\n");
    fprintf(arquivo, "-------------------- Lista de Empregados -------------------\n");
    for (int i = 0; i < 2; i++)
    {
        fprintf(arquivo, "Nome do Empregado: %s. Idade do Empregado: %d. Sexo: %s.\n", Empregados[i].nome, Empregados[i].idade, Empregados[i].sex);
        fprintf(arquivo, "CPF: %s. Data de Nascimento: %s. Setor: %d.\n", Empregados[i].cpf, Empregados[i].dataNasc, Empregados[i].setor);
        fprintf(arquivo, "Cargo: %s. Salario: %d.\n", Empregados[i].cargo, Empregados[i].salario);
        fprintf(arquivo, "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Nome do Empregado: %s. Idade do Empregado: %d. Sexo: %s.\n", Empregados[i].nome, Empregados[i].idade, Empregados[i].sex);
        printf("CPF: %s. Data de Nascimento: %s. Setor: %d.\n", Empregados[i].cpf, Empregados[i].dataNasc, Empregados[i].setor);
        printf("Cargo: %s. Salario: %d.\n", Empregados[i].cargo, Empregados[i].salario);
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    }
}
