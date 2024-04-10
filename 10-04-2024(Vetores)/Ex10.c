#include <stdio.h>

int num = 0;

int retornar(int * ptr){
    printf("%d", *ptr); // Printa o valor da variável referente ao endereço que foi passado ao ponteiro
}

int main(){
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    retornar(&num); // Chama a função
}