#include <stdio.h>

int numeros[] = {2, 4, 6, 8, 3, 9}, num = 0, indice = 0;
int len = sizeof(numeros)/sizeof(numeros[0]);

int encontrarIndice(int numeros[], int len, int num){
    for(int i = 0; i < len; i++){
        if(numeros[i] == num){
            indice = i; // Se o numero da lista for igual ao numero pedido, a variável "indice", vira a posição em que o For está
        } else {
            indice = 0; // Se não encontrar o numero, a variável "indice" vira 0.
        }
    }
    if(indice != 0){
        printf("O numero foi localizado!\nIndice do numero: %d", indice); // Se o indice for diferente de 0, ele retorna que o numero foi encontrado.
        return 0;
    } else {
        printf("O numero nao foi localizado!"); // Caso o indice seja igual a 0, ele retorna que não foi localizado o número.
        return -1;
    }
}

int main(){
    printf("Digite um numero: ");
    scanf("%d", &num);
    encontrarIndice(&numeros, len, num); // Chama a função 👍
}