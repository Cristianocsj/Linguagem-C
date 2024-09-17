//Faça um programa que permita ler duas matrizes 3x3 de inteiros e apresente uma matriz que seja a soma dessas duas matrizes lidas.

#include <stdio.h>
#define L 3
#define C 3

int main(int argc, char const *argv[])
{
    int mat1[L][C], mat2[L][C], matSoma[L][C], i, j;

    for (i = 0; i < L; i++){
        for (j = 0; j < C; j++)
        {
            printf("Digite os dados do campo[%d][%d] da primeira matriz: ", i, j);
            scanf("%d", mat1[i][j]);
        }
        
    }

    for (i = 0; i < L; i++){
        for (j = 0; j < C; j++)
        {
            printf("Digite os dados do campo[%d][%d] da segunda matriz: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
        
    }

    for (i = 0; i < L; i++){
        for (j = 0; j < C; j++)
        {
            matSoma[i][j] = mat1[i][j] +mat2[i][j];
        }
        
    }

    for (i = 0; i < L; i++){
        for (j = 0; j < C; j++)
        {
            printf("%d ", &matSoma[i][j]);
        }
        
    }
    return 0;
}
