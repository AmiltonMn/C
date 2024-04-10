#include <stdio.h>

int main(){
    char * ptr;
    char nome[50] = "Amilton";
    ptr = &nome;
    printf("%s", ptr); // Printa a string
}