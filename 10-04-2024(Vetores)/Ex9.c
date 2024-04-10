#include <stdio.h>

int numeros[] = {2, 4, 6, 8, 3, 9}, pares = 0, impares = 0;
int len = sizeof(numeros)/sizeof(numeros[0]);

int contarElementos(int numeros[], int len){
    for(int i = 0; i < len; i++){
        if(numeros[i]%2 == 0){ // Se o módulo do número no indice referente ao I for igual 0, a contagem de pares aumenta em 1.
            pares ++;
        } else {
            impares ++; // Se o módulo do número no indice referente ao I for igual 1, a contagem de impares aumenta em 1.
        }
    }
}

int main(){
    contarElementos(&numeros, len);
    printf("Dentro da lista de numeros, existem %d pares e %d impares.", pares, impares);
}