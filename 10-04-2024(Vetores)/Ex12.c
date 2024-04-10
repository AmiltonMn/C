#include <stdio.h>

int main(){
    int inteiros[] = {1, 2, 3, 4, 5};
    int * ptr;
    ptr = &inteiros; // Recebe o endereço da lista
    ptr[2] = 50; // Altera o item no indice "2" da lista
    printf("%d", inteiros[2]); // Printa o indice "2" da lista
}