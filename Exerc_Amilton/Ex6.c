#include <stdio.h>

char palavra[50] = "";
char print(int cont){
    if (cont >= 0){
        printf("%c", palavra[cont]);
        print(cont -1);
    }
}

int main(){
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    print(50);
}