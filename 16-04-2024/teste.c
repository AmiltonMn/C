#include <stdio.h>

int main(void){
    int matriz[3][3] = {{1,2,3}, {4,5,6},{7,8,9}};

    printf("%d\n", matriz[1][1]);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i != 2 && j !=3){
                printf("%d,", matriz[i][j]);
            } else {
                printf("%d\n", matriz[2][2]);
                i = 3;
                j = 3;
        }
        }
    }
}
