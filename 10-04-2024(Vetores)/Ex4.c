#include <stdio.h>

int numeros[] = {51, 10, 15, 20, 50, 2, 3}, maior = 0;
int len = sizeof(numeros)/sizeof(numeros[0]);

int encontraMaiorElemento(int numeros[], int len){
    for(int i = 0; i < len; i++){
        if(maior < numeros[i]){
            maior = numeros[i]; // Se o numero maior for menor do que o numero que esta sendo verificado no "For", ele altera o for para esse numero do For.
        }
    }
}
int main(){
    encontraMaiorElemento(&numeros, len); // Chama a função
    printf("%d", maior);
}