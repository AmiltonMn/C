#include <stdio.h>

int main()
{
    char personagens[5][50] = 
    {
        {"1 - Steve"},
        {"2 - Akali"},
        {"3 - Mario"},
        {"4 - Lara Croft"},
        {"5 - Embananado"}
    };
    char jogo[5][50] = 
    {
        {"A - League of Legends"},
        {"B - Super Mario"},
        {"C - Minecraft"},
        {"D - Fortnite"},
        {"E - Tomb Raider"}
    };
    char respostasCorretas[5][1] = 
    {
        {'c'},
        {'a'},
        {'b'},
        {'e'},
        {'d'}
    };
    char respostasUsuario[5][1] = {{""}};
    int pontos = 0;
    printf("Relacione as seguintes matrizes:\n");
    printf("|===========================================|\n");
    for(int i = 0; i < 5; i++)
    {
        printf("|%s\t", personagens[i]);
        printf("\t%s", jogo[i]);
        printf("\n");
    }
    printf("|===========================================|\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Qual a resposta da %d?\n", i+1);
        scanf(" %c", respostasUsuario[i]);
        printf("|===========================================|\n");
            for(int j = 0; j < 5; j++)
            {
                printf("|%s\t", personagens[j]);
                printf("\t%s", jogo[j]);
                printf("\n");
            }
        printf("|===========================================|\n");
    }
    for(int i = 0; i < 5; i++)
    {
        if(respostasUsuario[i][0] == respostasCorretas[i][0])
        {
            printf("Resposta %d correta!\n", i+1);
            pontos ++;
        } else {
            printf("Resposta %d errada!\n", i+1);
        }
    }
    printf("Pontos: %d", pontos);
} 