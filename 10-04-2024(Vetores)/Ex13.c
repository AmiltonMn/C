#include <stdio.h>

void removerElemento(int *inteiros, int len, int indice){
    for(int i = indice; i <= len - 1; i++){
            inteiros[i] = inteiros[i+1]; // Transcreve o item atual com o próximo item
        }
    inteiros[len-1] = 0; // Transcreve o último item para 0
}

void printarLegal(int *inteiros, int len){
    for(int i = 0; i < len; i++){
        printf("%d", inteiros[i]); // Printa a array
    }
}
int main(){
    int inteiros[] = {1, 2, 3, 4, 5, 6, 7}, indice = 0;
    int len = sizeof(inteiros)/sizeof(inteiros[0]);
    removerElemento(inteiros, len, indice);
    printarLegal(inteiros, len);
}