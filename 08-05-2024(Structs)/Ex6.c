#include <stdio.h>

typedef struct
{
    char nome[20];
    char endereco[20];
    char telefone[12];
    int cont;
} Pessoa;

int main()
{
    Pessoa Lista[5], troca;
    int letra;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome: \n");
        scanf("%s", Lista[i].nome);

        printf("Digite o endereco: \n");
        scanf("%s", Lista[i].endereco);

        printf("Digite o telefone: \n");
        scanf("%s", Lista[i].telefone);
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j ++)
        {
            letra = -1;
            do
            {
                letra ++;
                if (Lista[j].nome[letra] < 97)
                {
                    Lista[j].nome[letra] += 32;
                }
                if (Lista[j + 1].nome[letra] < 97)
                {
                    Lista[j + 1].nome[letra] += 32;
                }
                if (Lista[j].nome[letra] > Lista[j + 1].nome[letra])
                {
                    troca = Lista[j];
                    Lista[j] = Lista[j + 1];
                    Lista[j + 1] = troca;
                }
            } while (Lista[j].nome[letra] == Lista[j + 1].nome[letra]);
            
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Nome: %s. Endereco: %s. Telefone: %s.\n", Lista[i].nome, Lista[i].endereco, Lista[i].telefone );
    }
}
