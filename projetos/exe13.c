#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Necessário para malloc e free

#define TA 10
#define TB 7
#define TC 15
#define TD 9

// Insertion Sort
void insertion(int *a, int T) {
    int i, j, tmp;

    for (i = 1; i < T; i++) {
        tmp = a[i];

        for (j = i - 1; j >= 0 && tmp < a[j]; j--) {
            a[j + 1] = a[j];
        }

        a[j + 1] = tmp;
    }
}

// Selection Sort
void selection(int *vet, int tam) {
    int i, j, min, x;

    for (i = 0; i < tam - 1; i++) {
        min = i;

        for (j = i + 1; j < tam; j++) {
            if (vet[j] < vet[min]) {
                min = j;
            }
        }

        // Troca os elementos
        x = vet[min];
        vet[min] = vet[i];
        vet[i] = x;
    }
}

// Quick Sort
void quick(int *vet, int esq, int dir) {
    if (esq >= dir) return; // Caso base

    int pivo = esq, i, j, ch;

    for (i = esq + 1; i <= dir; i++) {
        if (vet[i] < vet[pivo]) {
            ch = vet[i];

            for (j = i; j > pivo; j--) {
                vet[j] = vet[j - 1];
            }

            vet[pivo] = ch;
            pivo++;
        }
    }

    quick(vet, esq, pivo - 1);
    quick(vet, pivo + 1, dir);
}

// Merge Sort
void mergeSort(int *vetor, int posicaoInicio, int posicaoFim) {
    if (posicaoInicio == posicaoFim) return;

    int metadeTamanho = (posicaoInicio + posicaoFim) / 2;

    mergeSort(vetor, posicaoInicio, metadeTamanho);
    mergeSort(vetor, metadeTamanho + 1, posicaoFim);

    int i = posicaoInicio, j = metadeTamanho + 1, k = 0;
    int *vetorTemp = (int *) malloc(sizeof(int) * (posicaoFim - posicaoInicio + 1));

    if (vetorTemp == NULL) {
        // Trate o erro de alocação de memória
        return;
    }

    while (i <= metadeTamanho || j <= posicaoFim) {
        if (i == metadeTamanho + 1) {
            vetorTemp[k++] = vetor[j++];
        } else if (j == posicaoFim + 1) {
            vetorTemp[k++] = vetor[i++];
        } else if (vetor[i] < vetor[j]) {
            vetorTemp[k++] = vetor[i++];
        } else {
            vetorTemp[k++] = vetor[j++];
        }
    }

    for (i = posicaoInicio; i <= posicaoFim; i++) {
        vetor[i] = vetorTemp[i - posicaoInicio];
    }

    free(vetorTemp);
}

// Preenche as notas
void Preenche(float *vet, int tam) {
    for(int i = 0; i < tam; i++) {
        printf("Digite o valor da nota do aluno %d: ", i + 1);
        scanf("%f", &vet[i]);
    }
}

// Mostra as notas
void Mostra(float *vet, int tam) {
    for(int i = 0; i < tam; i++) {
        printf("Nota: %.2f\n", vet[i]);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float A[TA], B[TB], C[TC], D[TD]; 

    printf("\nTurma 1");
    Preenche(A, TA);
    printf("\nTurma 2");
    Preenche(B, TB);
    printf("\nTurma 3");
    Preenche(C, TC);
    printf("\nTurma 4");
    Preenche(D, TD);
    

    selection((int *)A, TA);
    insertion((int *)B, TB);
    quick((int *)C, 0, TC - 1);
    mergeSort((int *)D, 0, TD - 1);
    
    Mostra(A, TA);
    Mostra(B, TB);
    Mostra(C, TC);
    Mostra(D, TD);

    return 0;
}