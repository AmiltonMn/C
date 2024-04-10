#include <stdio.h>

char nomes[][50] = {"Alice", "Bob", "Carol", "David"}; // Declara a lista de nomes
int len = sizeof(nomes)/sizeof(nomes[0]);

int main(){
    for(int i = 0; i < len; i++){
        printf("%s\n", nomes[i]); // Printa os nomes
    }
    printf("%d", len); // Printa o tamanho da lista
}