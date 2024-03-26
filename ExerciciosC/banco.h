#include <stdio.h>
#ifndef BANCO_H
#define BANCO_H

int saldo = 0;
int deposito = 0;

void depositar(int saldo, int deposito)
{
    return saldo + deposito;
}

#endif