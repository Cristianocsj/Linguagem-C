#include <stdio.h>
#include <locale.h>
#define L 4
#define C 6

void Imprime(int *M, int linha, int coluna){
  int i, j;
  for(i = 0; i < linha; i++){
    for(j = 0; i < coluna; j++){
      printf("%d  ", M[i].[j])
    }
    printf("\n")
  }
}

int main(void) {
  int mat[4][6], i, j;
  int soma = 0;

  for(i = 0; i < 4; i++){
    for(j = 0; j < 6; j++){
      printf("Digite o valor da posição [%d][%d]: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
  printf("\n");

  for(i = 0; i < 4; i++){
    for(j = 0; j < 6; j++){
      if(i == 3){
        soma += mat[i][j];
      }
    }
  }

  printf("A soma dos valores da última linha é: %d", soma);
}
