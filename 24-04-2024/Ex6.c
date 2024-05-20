#include <stdio.h>
#include <stdlib.h>

int main()
{
    int caracteres1 = 0, caracteres2 = 0, maior = 0;

    printf("Quantos caracteres tera a primeira palavra?\n");
    scanf("%d", &caracteres1);

    char * array1 = (char *)malloc(sizeof(char) * caracteres1 + 1);

    printf("Quantos caracteres tera a segundaa palavra?\n");
    scanf("%d", &caracteres2);

    char * array2 = (char *)malloc(sizeof(char) * caracteres2 + 1);

    if(caracteres2 > caracteres1)
    {
        maior = caracteres2;
    } else {
        maior = caracteres1;
    }

    printf("Digite a primeira palavra: ");
    scanf("%s", array1);

    printf("Digite a segunda palavra: ");
    scanf("%s", array2);

    char * array3 = (char *)malloc(sizeof(char) * maior);
    for(int i = 0; i < maior; i++)
    {
        if (array1[i] == array2[i])
        {
            array3[i] = array1[i];
        }
    }   

    for (int i = 0; i < maior; i++)
    {
        printf("%c", array3[i]);
    }
}