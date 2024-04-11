#include <stdio.h>

int main(){
    int cont = 0;
    int notasAlunos[3][10] = {
    {1,2,3,4,5,6,7,8,9,10},
    {11,12,13,14,15,16,17,18,19,20},
    {21,22,23,24,25,26,27,28,29,30}
    };
    int len = sizeof(notasAlunos[0])/sizeof(notasAlunos[0][0]);
    for(int i = 0;i < len; i++){
        printf("%d-", notasAlunos[cont][i]);
        printf("%d\n", i);
        if(i>=9){
            printf("---\n");
            cont ++;
            i = -1;
            if(cont==3){
                i = len;
            }
        }
    }
    printf("%d", notasAlunos[0][0]);
}