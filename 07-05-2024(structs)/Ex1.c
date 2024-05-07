#include <stdio.h>

typedef struct Ex1
{
    int hora;
    int minuto;
    int segundo;
} Horario;

typedef struct Ex1
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct Ex1
{
    Data Data;
    Horario Horario;
    char compromisso[100];
} Compromisso;

int main()
{
    
}