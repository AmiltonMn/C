#include <stdio.h>

int binDec(int num, int cont, int soma){
    if (num == 0){
        return soma;
    }
    soma += (num % 10) * cont;
    binDec(num/10, cont * 2, soma);
}

int main(){
    int num = 0, cont = 1;
    printf("Binario para decimal: ");
    scanf("%d", &num);
    printf("%d", binDec(num, cont, 0));
}