#include <stdio.h>

int soma(int num){
    if (num==0){
        return 1;
    }
    return num = num + soma(num -1);
}

int main(){
    int num = 0;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    printf("----------------------\n");
    printf("%d", soma(10));
}