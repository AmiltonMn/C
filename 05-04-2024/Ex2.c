#include <stdio.h>

int numeros[10] = {1, 6, 29, 5, 3, 31, 2, 8, 30, 5};
int maior = 0;

int main(){
    for (int count = 0; count < 10; count++){
        if (numeros[count]>maior){
            maior = numeros[count];
        }
    }
printf("%d", maior);
}