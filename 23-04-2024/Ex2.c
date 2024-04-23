#include <stdio.h>
#include <stdlib.h>

void lerArquivo()
{
    int size = 0;
    char * buffer = (char *)malloc(++size);
    FILE * file = fopen("arquivo.txt", "r");
    while(!feof(file))
    {
        buffer[size-1] = (char)fgetc(file);
        buffer = realloc(buffer, ++size);
    }
    fclose(file);
    printf("%s", buffer);
    free(buffer);
}

int main()
{
    lerArquivo();
}