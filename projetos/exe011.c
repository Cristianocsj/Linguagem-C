#include <stdio.h>
#define Tam 3

struct Banda
{
    char nome[50];
    char estilo[25];
    int qtd_albuns;
};

int main(int argc, char const *argv[])
{
    int i, contMais5 = 0;
    struct Banda b1[Tam];

    for(i = 0; i < Tam; i++){
        printf("Digite o nome da banda: ");
        fgets(b1[i].nome, 50, stdin);
        b1[i].nome[strcspn(b1[i].nome, "\n")] = '\0';  // remove o '\n' que o fgets insere

        printf("Digite o estilo musical dessa banda: ");
        fgets(b1[i].estilo, 25, stdin);
        b1[i].estilo[strcspn(b1[i].estilo, "\n")] = '\0';  // remove o '\n' que o fgets insere

        printf("Digite quantos álbuns da banda: ");
        scanf("%d", &b1[i].qtd_albuns);
        getchar();  // consumir o '\n' deixado pelo scanf
    }

    for(i = 0; i < Tam; i++){
        if(b1[i].qtd_albuns > 5){
            contMais5++;
        }
    }

    printf("\nExistem %d bandas com mais de 5 álbuns lançados.\n", contMais5);

    for(i = 0; i < Tam; i++){
        if(b1[i].qtd_albuns > 5){
            printf("Nome da banda: %s\n", b1[i].nome);
            printf("Estilo da banda: %s\n", b1[i].estilo);
            printf("Quantidade de álbuns: %d\n", b1[i].qtd_albuns);
        }
    }

    return 0;
}
