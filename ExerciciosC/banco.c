#include <stdio.h>
#include "banco.h"

int saldo = 0;

int main()
{
    printf("Quanto voce quer depositar?\n");
    scanf("%d", &deposito);
    depositar(saldo, deposito);
    printf(saldo);
}