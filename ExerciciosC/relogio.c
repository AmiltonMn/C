#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

escolha = 0;

int horario()
{
    time_t agora;

    struct tm*horario;

    agora = time(NULL);

    horario = localtime(&agora);
    printf("  ____________________________\n");
    printf("  |  Horario atual %02d:%02d:%02d  |  \n", horario->tm_hour, horario->tm_min, horario->tm_sec);
    printf("  ----------------------------\n");
}

int cronometro()
{
    int hora = 0, minutos = 0, segundos = 0, limite = 0;
    printf("\nQuantos minutos voce quer contar com o cronometro?\n");
    scanf("%d", &limite);
    while (minutos < limite)
    {
        printf("%02d:%02d:%02d\n",  hora, minutos, segundos);
        sleep(1);
        system("CLS");
        segundos ++;
        if (segundos >= 60)
        {
            minutos = minutos + 1;
            segundos = 0;
        }
        
    }
}
int temporizador()
{
    int hora = 0, minutos = 0, segundos = 0, limite = 0;
    printf("\nMinutos: \n");
    scanf("%d", &limite);
    minutos = limite;
    while (minutos > 0)
    {
        if (minutos >= 1)
        {
            segundos = 59;
            minutos --;
            while (segundos >= 0)
            {
                printf("+==-=-===+\n");
                printf("|%02d:%02d:%02d|\n",  hora, minutos, segundos);
                printf("+==-=-===+\n");
                sleep(1);
                system("CLS");
                segundos --;
            }
        } 
    }
}
int main()
{
    printf("+-----------------------------+\n");
    printf("+----_______RELOGIO_______----+\n");
    printf("+----|===================|----+\n");
    printf("+----|  1 - HORA ATUAL   |----+\n");
    printf("+----|  2 - CRONOMETRO   |----+\n");
    printf("+----|  3 - TEMPORIZADOR |----+\n");
    printf("+----|  0 - SAIR         |----+\n");
    printf("+----|===================|----+\n");
    printf("+-----------------------------+\n");
    printf("Faca sua escolha:------------:\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        horario();
        break;

    case 2:
        cronometro();
        break;

    case 3:
        temporizador();
        break;

    case 0:
        break;

    default:
        break;
    }
}