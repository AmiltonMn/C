#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ex1.h"
int main()
{
    Pessoa * Agenda = malloc(sizeof(Pessoa));
    int size = 1;
    Pessoa * novaPessoa;

    strcpy(Agenda->nome, "Amilton");
    printf("%s", Agenda->nome);
    adicionar(Agenda, size, &novaPessoa);
    free(Agenda);
}