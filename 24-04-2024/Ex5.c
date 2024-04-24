#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto1[8] = "AMILTON";
    char texto2[8] = "AMILTON";
    int flag = 0;
    for(int i = 0; i < 8; i++)
    {
        if(texto1[i] != texto2[i])
        {
            printf("Os textos sao diferentes!\n");
            break;
        } else {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        printf("Os textos sao iguais!\n");
    }
    return 0;
}