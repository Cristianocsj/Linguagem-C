#include <stdio.h>
#include <locale.h>

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