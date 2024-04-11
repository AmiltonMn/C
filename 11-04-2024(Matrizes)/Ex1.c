#include <stdio.h>
#include <string.h>

int main(){
    char nomesAlunos[5][50] = {{}};
    char nome[50] = "";
    int qtdAlunos = 0, i = 0, j = 0;
    int lenNomes = sizeof(nomesAlunos)/sizeof(nomesAlunos[0]);

    printf("Quantos alunos voce quer adicionar?(Com um maximo de 5 alunos)\n");
    scanf("%d", &qtdAlunos);
    printf("%d", lenNomes);
    while(i < qtdAlunos){
        printf("Digite o nome do aluno:\n");
        scanf("%s", nomesAlunos[i]);
        i ++;
    }
    for(int i = 0; i < lenNomes; i++){
        printf("%s\n", nomesAlunos[i]);
    }

}