#include <stdio.h>

int binario(int num){
    if (num == 0){
        printf("1");
        return 1;
    } 
    binario(num/2);
    printf("%d", num % 2);
}

int main(){
    int num = 0;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    binario(num);
}