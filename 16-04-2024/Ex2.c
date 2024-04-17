#include <stdio.h>

int main()
{
    int numeros[2][2] = {{1,2}, {1,2}};
    int len = sizeof(numeros);
    printf("%d", len);
}