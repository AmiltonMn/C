#include <stdio.h>
#include <stdlib.h>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct
{
    char rua[100], complemento[50], CPF[15], bairro[20], cidade[50], estado[50], pais[50], numero[8];
} Endereco;


typedef struct
{
    char DDD[5], telefone[12];
} Telefone;

typedef struct 
{
    char dia[4], mes[4], ano[8];
} Aniversario;

typedef struct
{
    Endereco endereco;
    Telefone telefone;
    Aniversario aniversario;
    char nome[100], email[100], observacao[350];
} Pessoa;

void adicionar(Pessoa * Agenda, int size, Pessoa * pessoa)
{
    int letra;
    Pessoa troca, troca2;
    size++;
    Agenda = (Pessoa *) realloc(Agenda, sizeof(Pessoa) * (size));
    Agenda[size] = *pessoa;
    
    for(int i = 0; i < size; i++)
    {
        letra = -1;
        do
        {
            letra ++;
            if(((*pessoa).nome[letra] | 0x20) < (Agenda[i].nome[letra] | 0x20))
            {
                troca = Agenda[i];
                Agenda[i] = *pessoa;
                while (i < size)
                {
                    i ++;
                    troca2 = Agenda[i];
                    Agenda[i] = troca;
                    troca = troca2;
                }
            }
        } while(Agenda[i].nome[letra] == Agenda[i + 1].nome[letra]);
    }
}


#endif