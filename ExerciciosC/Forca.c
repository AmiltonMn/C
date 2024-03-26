#include <stdio.h>
#include <stdlib.h>

char palavraForca[15];
int cont = 0, linha = 0;

void lerArquivo(x)
{
    FILE * arquivo = fopen("palavras.txt", "r");
    if (arquivo == NULL)
    {
        printf("Ocorreu um erro, nao foi possivel abrir o arquivo");
    } else {
        while (cont < x)
        {
            linha = x;
            fscanf(arquivo, "%s\n", palavraForca);
            fclose(arquivo);
            printf("%s", palavraForca);
            cont = cont + x;
        }
        
    }

}
int main ()
{
    srand(time(NULL));
    int x = rand() % 20 + 1;
    lerArquivo(x);
    return 0;
}