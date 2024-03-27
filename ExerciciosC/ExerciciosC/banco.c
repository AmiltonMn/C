#include <stdio.h>
#include "banco.h"

char nome[50];
float saldo = 0, dep = 0, emp = 0, sacar = 0, fatura = 0;
int escolha = 1, parcela = 0, venc = 0;

int main()
{
    FILE * arquivo;
    arquivo = fopen("extratoBanc.txt", "w");
    printf("____________________________\n");
    printf("_________           ________\n");
    printf("_________   BANCO   ________\n");
    printf("_________    FER    ________\n");
    printf("_________           ________\n");
    printf("____________________________\n");
    printf("Digite seu nome: \n");
    scanf("%s", nome);
    fprintf(arquivo, "--===EXTRATO BANCARIO BANCO FER===--\n");
    fprintf(arquivo, "Cliente %s ===------<>------===\n", nome);
    fprintf(arquivo, "\n\n--------------------------------------------------\n\n");
    printf("Ola %s. Bem vindo ao BANCO FER!\n", nome);
    while (escolha!= 0)
    {

        printf("Escolha uma das seguintes operacoes: \n");
        printf("____________________________\n");
        printf("____________________________\n");
        printf("______  1 - DEPOSITO    ____\n");
        printf("______  2 - SAQUE       ____\n");
        printf("______  3 - EMPRESTIMO  ____\n");
        printf("______  0 - SAIR        ____\n");
        printf("____________________________\n");
        printf("____________________________\n");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            saldo = depositar(saldo, dep, arquivo);
            printf("%.2f", saldo);
            break;
        case 2:
            printf("%.2f", saldo);
            saldo = saque(sacar, saldo, arquivo);
            break;
        case 3:
            emprestimo(emp, saldo, parcela, fatura, venc, arquivo);
            break;
        case 0:
            break;
        default:
            break;
        }
    }
return 0;
}

