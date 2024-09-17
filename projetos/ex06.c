//Faça um algoritmo que leia um vetor S[20] e uma variável A. A seguir, mostre o produto da variável A pelo vetor.

#include <stdio.h>
#include <locale.h>
#define T 20

void ProdutoVariavel(int vet[], int prod, int tamanho)
{
    for (int i = 0; i < tamanho; i++) {
        vet[i] = vet[i] * prod;
    }
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int produto, P[T], i;

    printf("Digite o número que multiplicará os elementos do vetor: ");
    scanf("%d", &produto);

    for (i = 0; i < T; i++) {
        printf("Digite o número %d do vetor: ", i + 1);
        scanf("%d", &P[i]);
    }

    ProdutoVariavel(P, produto, T);

    printf("Vetor após o produto:\n");
    for (i = 0; i < T; i++) {
        printf("%d ", P[i]);
    }

    return 0;
}
