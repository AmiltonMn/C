#include <stdio.h>
#ifndef BANCO_H
#define BANCO_H

float depositar(float dep, float saldo, FILE * arquivo)
{
    printf("Quanto voce quer depositar?\n");
    scanf("%f", &dep);
    if (dep < 0)
    {
        printf("O valor para ser depositado precisa ser maior que 0!\n");
    } else {
        printf("Deposito de %.2f efetuado com sucesso!\n", dep);
        saldo = saldo + dep;
        printf("NOVO SALDO: R$%.2f\n", saldo);
        fprintf(arquivo, "DEPOSITO DE R$%.2f.\n", dep);
        return saldo;
    }
}
float saque(float sacar, float saldo, FILE * arquivo)
{
    printf("Quanto voce quer sacar?\n");
    scanf("%f", &sacar);
    if (saldo >= sacar)
    {
        printf("Saque de R$%.2f realizado com sucesso!\n", sacar);
        saldo = saldo - sacar;
        printf("SALDO ATUAL: R$%.2f\n", saldo);
        fprintf(arquivo, "SAQUE DE R$%.2f REALIZADO COM SUCESSO!\n", sacar);
        return saldo;

    } else if(saldo < sacar)  {
        printf("Nao foi possivel realizar o saque. Saque acima do saldo atual!\n");
        fprintf(arquivo, "Tentativa de saque sem sucesso!\n");
        return saldo;
    }
}
float emprestimo(float emp, float saldo, int parcela, float fatura, int venc, FILE * arquivo)
{
    saldo += emp;
    printf("Voce fez um emprestimo de R$%.2f\n", emp);
    emp = emp * 1.5;
    printf("Em quantas vezes voce quer pagar este emprestimo?\n");
    scanf("%d", &parcela);
    fatura = emp / parcela;
    printf("Escolha a data de vencimento da fatura: \n");
    scanf("%d", &venc);
    printf("O emprestimo de R$%.2f sera pago em %dx. As parcelas serao de R$%.2f. O vencimento sera todo dia %d\n", emp, parcela, fatura, venc);
return saldo;
}
#endif