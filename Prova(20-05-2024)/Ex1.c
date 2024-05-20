#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

typedef struct 
{
    char nome[20];
    char sobrenome[20];
    char dia[3];
    char mes[3];
    int anoNasc;

} Propietario;


typedef struct 
{
    char marca[15];
    char ano[5];
    char cor[15];
    char placa[8];
    char modelo[20];
    int hora;
    Propietario;

} Veiculos;

int main()
{
    FILE * arquivo;

    int quantidade;
    
    Veiculos carros[10];

    printf("ESTACIONAMENTO PARKTOP\n");

    printf("Quantos veiculos voce gostaria de cadastrar:\n");

    scanf("%d", &quantidade);

    for(int i = 0; i < quantidade; i++)
    {
        printf("Digite a marca do veiculo %d\n", i + 1);

        scanf("%s", &carros->marca);

        printf("Digite o ano do veiculo %d\n", i + 1);

        scanf("%s", &carros->ano);

        printf("Digite a cor do veiculo %d\n", i + 1);

        scanf("%s", &carros->cor);

        printf("Digite a placa do veiculo %d\n", i + 1);

        scanf("%s", &carros->placa);

        printf("Digite o modelo do veiculo %d\n", i + 1);

        scanf("%s", &carros->modelo);

        printf("Digite o nome do proprietario do veiculo %d\n", i + 1);

        scanf("%s", &carros->nome);

        printf("Digite o sobrenome do proprietario do veiculo %d\n", i + 1);

        scanf("%s", &carros->sobrenome);

        printf("Digite o dia de nascimento do proprietario do veiculo %d\n", i + 1);

        scanf("%s", &carros->dia);

        printf("Digite o mes de nascimento do proprietario do veiculo %d\n", i + 1);

        scanf("%s", &carros->mes);

        printf("Digite o ano de nascimento do proprietario do veiculo %d\n", i + 1);

        scanf("%d", &carros->anoNasc);

        printf("Digite a hora em que o carro esta sendo cadastrado:\n");

        scanf("%d", &carros->hora);

    }


    for(int i = 0; i < quantidade; i ++)
    {
        arquivo = fopen("carros.txt", "w");

        int anoNascimento = carros[i].anoNasc;
        int idade = 2024 - anoNascimento;

        fprintf(arquivo, "----------------- CARROS %d --------------------\n", i + 1);

        fprintf(arquivo, "Marca carro %d: %s\n", i + 1, carros[i].marca);

        fprintf(arquivo, "Ano carro %d: %s\n", i + 1, carros[i].ano);

        fprintf(arquivo, "Cor do carro %d: %s\n", i + 1, carros[i].cor);

        fprintf(arquivo, "Placa do carro %d: %s\n", i + 1, carros[i].placa);

        fprintf(arquivo, "Modelo do carro %d: %s\n", i + 1, carros[i].modelo);

        fprintf(arquivo, "Proprietario carro %d: %s %s\n", i + 1, carros[i].nome, carros[i].sobrenome);

        fprintf(arquivo, "Idade do proprietario do carro %d: %s\n", i + 1, idade);

        fprintf(arquivo, "--------------------------------------------------------------\n");
    }

    fclose(arquivo);

    return 0;
}