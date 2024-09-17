//Escrever um algoritmo que lê 2 vetores de tamanho 10. Crie, a seguir, um vetor S de 20 posições que contenha os elementos dos outros 2 vetores alternados: primeiro elemento do primeiro vetor, primeiro elemento do segundo vetor, segundo elemento do primeiro vetor, segundo elemento do segundo vetor...

#include <stdio.h>
#define T1 10
#define T2 20

void ElementosAlternados(int vetor1[], int vetor2[], int S[], int tamanho1) {
    int k = 0;
    for (int i = 0; i < tamanho1; i++) {
        S[k++] = vetor1[i];
        S[k++] = vetor2[i]; 
    }
}

int main(int argc, char const *argv[]) {
    int vet1[T1], vet2[T1], vetS[T2], i;

    for (i = 0; i < T1; i++) {
        printf("Digite o número %d do vetor 1: ", i + 1);
        scanf("%d", &vet1[i]);
        printf("Digite o número %d do vetor 2: ", i + 1);
        scanf("%d", &vet2[i]);
    }

    ElementosAlternados(vet1, vet2, vetS, T1);

    printf("\nVetor S alternado:\n");
    for (i = 0; i < T2; i++) {
        printf("%d ", vetS[i]);
    }
    printf("\n");

    return 0;
}
