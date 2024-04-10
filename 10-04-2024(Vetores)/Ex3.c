#include <stdio.h>

    int numeros[] = {5, 10, 15, 20}, soma = 0;
    int len = sizeof(numeros)/sizeof(numeros[0]);

int somar(int numeros[], int len){
    for (int i = 0; i < len; i++){
        soma = soma + numeros[i]; // Faz a soma dos numeros dentro da Array
    } 
}

int main(){
    printf("Ta ai mano\n"); // Printf 👍
    somar(&numeros, len); // Chama a função
    printf("%d\n", soma);
}   