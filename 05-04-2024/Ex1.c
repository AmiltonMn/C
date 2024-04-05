#include <stdio.h>

int numeros[3] = {10, 5, 8};
int soma = 0;

int main(){
    for (int i = 0; i <=2; i ++){
        soma = soma + numeros[i];

    }
    printf("%d", soma);
}
