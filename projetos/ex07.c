//Faça um algoritmo que leia um vetor N[20]. A seguir, encontre o menor elemento do vetor N e sua posição dentro do vetor, mostrando: "O menor elemento de N é M, e sua posição dentro do vetor é: P".

#include <stdio.h>
#define T 20

void encontrarMenorElemento(int vetor[], int tamanho, int *menorValor, int *posicao) {
    //se tamanho do vetor for <= 0
    if (tamanho <= 0) {
        *menorValor = -1;
        *posicao = -1;
        return;
    }

    *menorValor = vetor[0];
    *posicao = 1;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *menorValor) {
            *menorValor = vetor[i];
            *posicao = i+1;
        }
    }
}

int main() {
    int vetor[T];
    int menorValor, posicao;

    printf("Digite %d elementos para o vetor:\n", T);
    for (int i = 0; i < T; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    encontrarMenorElemento(vetor, T, &menorValor, &posicao);
    printf("O menor elemento de N é %d, e sua posição dentro do vetor é: %d\n", menorValor, posicao);
    return 0;
}
