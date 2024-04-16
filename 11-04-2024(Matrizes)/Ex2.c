#include <stdio.h>

int alterarMatriz()
{

}
void jogar(int x, char jogo[][5], int rodada, int fim)
{
    switch (x)
    {
    case 1:
        if(jogo[0][0] != 'X' && jogo[0][0] != 'O')
        {
            if(rodada%2 == 0)
            {
                jogo[0][0] = 'X';
            } else {
                jogo[0][0] = 'O';
            }
        } else {
            printf("O numero escolhido nao esta disponivel! Escolha outro!\n");
        }
        break;

    case 2:
        if(jogo[0][2] != 'X' && jogo[0][2] != 'O')
        {
            if(rodada%2 == 0)
            {
                jogo[0][2] = 'X';
            } else {
                jogo[0][2] = 'O';
            }
        } else {
            printf("O numero escolhido nao esta disponivel! Escolha outro!\n");
        }
        break;

    case 3:
        if(jogo[0][4] != 'X' && jogo[0][4] != 'O')
        {
            if(rodada%2 == 0)
            {
                jogo[0][4] = 'X';
            } else {
                jogo[0][4] = 'O';
            }
        } else {
            printf("O numero escolhido nao esta disponivel! Escolha outro!\n");
        }
        break;

    case 4:
        if(jogo[2][0] != 'X' && jogo[2][0] != 'O')
        {
            if(rodada%2 == 0)
            {
                jogo[2][0] = 'X';
            } else {
                jogo[2][0] = 'O';
            }
        } else {
            printf("O numero escolhido nao esta disponivel! Escolha outro!\n");
        }
        break;

    case 5:
        if(jogo[2][2] != 'X' && jogo[2][2] != 'O')
        {
            if(rodada%2 == 0)
            {
                jogo[2][2] = 'X';
            } else {
                jogo[2][2] = 'O';
            }
        } else {
            printf("O numero escolhido nao esta disponivel! Escolha outro!\n");
        }
        break;

    case 6:
        if(jogo[2][4] != 'X' && jogo[2][4] != 'O')
        {
            if(rodada%2 == 0)
            {
                jogo[2][4] = 'X';
            } else {
                jogo[2][4] = 'O';
            }
        } else {
            printf("O numero escolhido nao esta disponivel! Escolha outro!\n");
        }
        break;

    case 7:
        if(jogo[4][0] != 'X' && jogo[4][0] != 'O')
        {
            if(rodada%2 == 0)
            {
                jogo[4][0] = 'X';
            } else {
                jogo[4][0] = 'O';
            }
        } else {
            printf("O numero escolhido nao esta disponivel! Escolha outro!\n");
        }
        break;

    case 8:
        if(jogo[4][2] != 'X' && jogo[4][2] != 'O')
        {
            if(rodada%2 == 0)
            {
                jogo[4][2] = 'X';
            } else {
                jogo[4][2] = 'O';
            }
        } else {
            printf("O numero escolhido nao esta disponivel! Escolha outro!\n");
        }
        break;

    case 9:
        if(jogo[4][4] != 'X' && jogo[4][4] != 'O')
        {
            if(rodada%2 == 0)
            {
                jogo[4][4] = 'X';
            } else {
                jogo[4][4] = 'O';
            }
        } else {
            printf("O numero escolhido nao esta disponivel! Escolha outro!\n");
        }
        printf("%d", rodada);
        break;
                                            
    default:
        break;
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%c", jogo[i][j]);
        }
        printf("\n");
    }
}
int main(void)
{
    int jogada = 0, fim = 1, rodada = 0;
    char jogo[5][5] = {
        {'1', -77, '2', -77, '3'},
        {-60, -59, -60, -59, -60},
        {'4', -77, '5', -77, '6'},
        {-60, -59, -60, -59, -60},
        {'7', -77, '8', -77, '9'}
        };
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%c", jogo[i][j]);
        }
        printf("\n");
    }
    while(fim != 0)
    {
        printf("Onde voce quer jogar?\n");
        scanf("%d", &jogada);
        if(rodada%2 == 0)
        {
            printf("Jogador X ====\n");
        } else {
            printf("Jogador O ====\n");
        }
        jogar(jogada, jogo, rodada, fim);
        rodada++;
        if(
            (jogo[0][0] == jogo[0][2] && jogo[0][2] == jogo[0][4]) ||
            (jogo[2][0] == jogo[2][2] && jogo[4][0] == jogo[2][4]) ||
            (jogo[4][0] == jogo[4][2] && jogo[4][4] == jogo[4][4]) ||
            (jogo[0][0] == jogo[2][0] && jogo[4][0] == jogo[0][2]) ||
            (jogo[0][2] == jogo[2][2] && jogo[4][2] == jogo[2][2]) ||
            (jogo[0][4] == jogo[2][4] && jogo[4][4] == jogo[2][4]) ||
            (jogo[0][0] == jogo[2][2] && jogo[4][4] == jogo[2][2]) ||
            (jogo[0][4] == jogo[2][2] && jogo[0][4] == jogo[4][0])
        )
        {
            if(rodada%2 == 0)
            {
                printf("O jogador X ganhou o jogo!");
                fim = 0;
            } else {
                printf("O jogador O ganhou o jogo!");
                fim = 0;
            }
        }
    }
}