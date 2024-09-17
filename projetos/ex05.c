//Faça um algoritmo que leia um vetor K[30]. Em seguida, troque todos os elementos de ordem ímpar do vetor com os elementos de ordem par imediatamente posteriores.

#include <stdio.h>
#include <locale.h>
#define Tam 30

void TrocarImparPar(int K[], int tamanho) {
    int aux;
    for (int i = 0; i < tamanho - 1; i += 2) { //Verificação para evitar acesso fora dos limites
        if (K[i] % 2 != 0) { //Se o elemento de ordem ímpar for ímpar
            aux = K[i];
            K[i] = K[i + 1];
            K[i + 1] = aux;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[Tam];

    for (int i = 0; i < Tam; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vet[i]); //Correção do scanf para pegar o endereço
    }

    TrocarImparPar(vet, Tam);

    printf("Vetor modificado:\n");
    for (int i = 0; i < Tam; i++) {
        printf("%d\n ", vet[i]);
    }
    printf("\n");

    return 0;
}
