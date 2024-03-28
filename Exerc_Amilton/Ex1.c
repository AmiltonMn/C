#include <stdio.h>

int tabuada(int num, int i)
{
    if (i == 11){
        return 0;
    } else {
        printf("%d x %02d = %d\n", num, i, num * i );
        tabuada(num, i + 1);
    }
}
int main(){
    int i = 1, num = 0;
    printf("De qual numero voce quer ver a tabuada?\n");
    scanf("%d", &num);
    printf("---------------------------\n");
    tabuada(num, i);
}