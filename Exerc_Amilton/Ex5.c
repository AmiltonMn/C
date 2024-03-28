#include <stdio.h>

char palavra[50] = "aiaiaiaquedor";
char print(int cont){
    if (cont <= 50){
        printf("%c ", palavra[cont]);
        print(cont +1);
    }
}

int main(){
    print(0);
}