#include <stdio.h>

int main(){
    int num[2][2] = {{1,2},{3,4}};
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d", num[i][j]);
        }
    }
}