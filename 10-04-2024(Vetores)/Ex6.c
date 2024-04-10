#include <stdio.h>

int numeros[] = {2, 4, 6, 8, 3, 9};
int len = sizeof(numeros)/sizeof(numeros[0]);

int dobrarValores(int numeros[], int len){
    for (int i = 0; i < len; i++){
        numeros[i] = numeros[i] * 2; // Multiplica o numero por 2 de acordo com o "For"
        printf("%d\n", numeros[i]);
    }
}

int main(){
    dobrarValores(&numeros, len); // Chama a função.
}