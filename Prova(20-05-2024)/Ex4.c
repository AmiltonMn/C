#include <stdio.h>

typedef struct 
{
    char diaCriado[6];
    char diaVencimento[6];
} Datas;

typedef struct 
{
    char titulo[20];
    char desc[50];
    char status[13];
    Datas;
} Tarefas;

int main()
{
    int escolha = 1, fim = 0, numTarefas = 0, tarefasTotais = 0, excluir = 0, atualizar = 0, escolhaAtt = 0;
    Tarefas tarefas[50];

    while (fim != 1)
    {      
        printf("|====----===== GERENCIAR TAREFAS =====----====|\n");
        printf("| ------     1 - Adicionar tarefa       ------|\n");
        printf("| ------     2 - Visualizar tarefas     ------|\n");
        printf("| ------     3 - Excluir tarefa         ------|\n");
        printf("| ------     4 - Atualizar tarefa       ------|\n");
        printf("| ------     0 - Sair                   ------|\n");
        printf("|-====----=====-----------------=====----====-|\n");

        printf("Digite a sua escolha: \n");
        scanf("%d", &escolha);

        switch (escolha)
        {
            case 1:

                printf("Quantas tarefas voce quer adicionar?\n");
                scanf("%d", &numTarefas);
                for(int i = 0; i < numTarefas; i ++)
                {
                    printf("Digite o titulo da tarefa:\n");
                    scanf(" %20[^\n]", &tarefas[i].titulo);

                    printf("Digite a descrição da tarefa (Limite de 50 caracteres)\n");
                    scanf(" %13[^\n]", &tarefas[i].desc);

                    printf("Digite o status da tarefa (Em andamento, Concluida ou Pendente)\n");
                    scanf(" %50[^\n]", &tarefas[i].status);

                    printf("Digite o dia em que foi criada a tarefa\n");
                    scanf("%s", &tarefas[i].diaCriado);

                    printf("Digite o dia de vencimento da tarefa\n");
                    scanf("%s", &tarefas[i].diaVencimento);

                    tarefasTotais ++;
                }

                break;
            
            case 2:

                for(int i = 0; i < tarefasTotais; i ++)
                {

                    printf("TAREFA %d ----------------\n", i + 1);

                    printf("Titulo da tarefa: %s\n", tarefas[i].titulo);

                    printf("Descricao da tarefa: %s\n", tarefas[i].desc);

                    printf("Status da tarefa: %s\n", tarefas[i].status);

                    printf("Dia em que foi criada a tarefa: %s\n", tarefas[i].diaCriado);

                    printf("Dia de vencimento da tarefa: %s\n", tarefas[i].diaVencimento);
                }

                break;

            case 3:

                printf("Qual tarefa voce quer excluir? (Digite o numero da tarefa)\n");
                scanf("%d", &excluir);

                tarefas[excluir - 1] = tarefas[excluir + 1];

                tarefasTotais --;

                break;

            case 4:
                printf("Qual tarefa voce deseja atualizar?\n");
                scanf("%d", &atualizar);

                printf("O que voce gostaria de atualizar?\n");

                printf("1 - Titulo\n2 - Descricao\n3 - Status\n");
                scanf("%d", &escolhaAtt);

                switch (escolhaAtt)
                {
                case 1:

                    printf("Digite o novo titulo\n");
                    scanf(" %50[^\n]", &tarefas[atualizar].titulo);
                    break;

                case 2:
                
                    printf("Digite a nova descricao\n");
                    scanf(" %50[^\n]", &tarefas[atualizar].desc);
                    break;

                case 3:

                    printf("Qual o novo status da tarefa?\n(Digite entre Concluida, Em andamento ou Pendente)\n");
                    scanf("%s", &tarefas[atualizar].status);
                    break;
                
                default:
                    break;
                }

            case 0:

                fim = 1;

                break;

            default:
                break;
        }
    }
}
