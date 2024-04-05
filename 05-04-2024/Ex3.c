#include <stdio.h>

FILE * arquivo;
char escolha[] = "s";
char nome[50], curso[50];
int qtdNotas =0, i = 0, soma = 0, nota = 0, media = 0;

void cadastro(){
    printf("Digite o nome do aluno:\n");
    scanf("%s", nome);
    printf("Qual o curso do aluno?\n");
    scanf("%s", curso);
    printf("Quantas notas voce quer adicionar?\n");
    scanf("%d", qtdNotas);
    fprintf("Notas do aluno %s: ", nome);
    for (int i = 0; i <=qtdNotas; i++);
        printf("Digite a %d° nota: ", i);
        scanf("%d", nota);
        fprintf("%d", nota);
        soma += nota;
    media = soma/qtdNotas;
}

int main(){
    printf("-ESCOLA IANES-\n");
    arquivo = fopen("alunos.txt", "a");
    printf("Voce gostaria de cadastrar um aluno?\n");
    scanf("%c", escolha);
    while (escolha != "n"){ 
        cadastro();
        printf("Voce gostaria de fazer um novo cadastro? Digite \"n\" para sair! \n");
        scanf("%c", escolha);
}