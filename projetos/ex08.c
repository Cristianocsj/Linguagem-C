//Escreva um algoritmo que leia um vetor de 10 posições e mostre-o. Em seguida, troque o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Mostre o novo vetor depois da troca.

#include <stdio.h>
#define T 10

void TrocarElementos(int vet1R[], int vet2S[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        vet2S[i] = vet1R[i];
    }

    //fazendo as trocas
    for(int i = 0; i < tamanho; i++){
        int temp = vet2S[i];
        vet2S[i] = vet2S[tamanho - 1 - i];
        vet2S[tamanho - 1 - i] = temp;
    }
}

int main(int argc, char const *argv[])
{
    int vetor[T], vetorTroca[T];

    printf("Digite %d elementos para o vetor:\n", T);
    for(int i = 0; i < T; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor original: ");
    for (int i = 0; i < T; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    TrocarElementos(vetor, vetorTroca, T);

    printf("\nVetor após a troca dos elementos: ");
    for (int i = 0; i < T; i++) {
        printf("%d ", vetorTroca[i]);
    }
    printf("\n");
    return 0;
}
