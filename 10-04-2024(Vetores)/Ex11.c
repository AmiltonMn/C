#include <stdio.h>

void inverterVetor(int *v, int len){
    for(int i = 0; i<(len)/2; i ++){ // Faz a inversão do array
        int temp = v[i]; // A variável temp recebe o valor do array no indice do for no momento.
        v[i] = v[len-1-i];  // Aqui é feita a inversão do final 
        v[len-1-i] = temp; // Aqui é feita a inversão do inicio
    }
    for(int i = 0; i < len; i++){
        printf("%d\n", v[i]); // Printa a ordem
    }
}

void printarArray(int *v, int len){
    for(int i = 0; i <= len - 1; i ++){
        printf("%d\n", v[i]);
    }
}

int main(){
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(numeros)/sizeof(numeros[0]);
    inverterVetor(&numeros, len); // Chama a função de inverter o array.
    printarArray(&numeros, len); // Chama a função de printar a Array.
}