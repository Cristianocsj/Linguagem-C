#include <stdio.h>
#include <string.h>  //necessário para o strcspn
#define T 5

struct Aluno {
    char nome[50];
    int qtd_faltas;
};

int main(int argc, char const *argv[]) {
    int i, contReprovados = 0;
    float percentFaltas;
    struct Aluno Turma[T];

    for(i = 0; i < T; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(Turma[i].nome, 50, stdin);
        Turma[i].nome[strcspn(Turma[i].nome, "\n")] = '\0';  //remover o '\n' que o fgets insere

        printf("Digite a quantidade de faltas desse aluno: ");
        scanf("%d", &Turma[i].qtd_faltas);
        getchar();  //consumir o '\n' deixado pelo scanf
    }

    printf("\nAlunos reprovados por falta:\n");
    for(i = 0; i < T; i++) {
        percentFaltas = (100.0 * Turma[i].qtd_faltas) / 20;
        if(percentFaltas > 25) {
            contReprovados++;
            printf("Nome do aluno: %s\n", Turma[i].nome);
            printf("Porcentagem de faltas: %.2f%%\n", percentFaltas);
        }
    }

    printf("\nQuantidade de alunos reprovados por faltas no semestre: %d\n", contReprovados);
    
    return 0;
}
