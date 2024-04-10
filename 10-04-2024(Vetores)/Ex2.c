#include <stdio.h>

int * ptr; // Declara o ponteiro
int num = 0; // Declara o num

int main(){
    printf("Digite um numero: "); 
    scanf("%d", &num); // Recebe o input do numero
    printf("%d\n", num);
    ptr = &num; // O ponteiro recebe o endereço do numero
    *ptr = 10; // O ponteiro altera o valor do endereço do número
    printf("%d\n", num);
}