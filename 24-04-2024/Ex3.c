#include <stdio.h>
#include <stdlib.h>

int dobro(int * num)
{
    num = *num * 2;
}

int main()
{
    int num = 2;
    printf("%d", dobro(&num));
}