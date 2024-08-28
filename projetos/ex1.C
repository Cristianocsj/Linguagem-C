#include <stdio.h>
#include <locale.h>
#define L 4
#define C 6

void Imprime(int M[L][C]){
	int i, j;
	for(i=0;i<L;i++){
		for(j=0;j<C;j++){
			printf("%d   ", M[i][j]);
		}
		printf("\n");
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,j,mat[L][C], soma=0;
	
	for (i=0;i<L;i++){
		for(j=0;j<C;j++){
			printf("Digite um número inteiro: ");
			scanf("%d", &mat[i][j]);
			
			if(i==3){
				soma=soma+mat[i][j];
			}
		}
	}
	printf("Matriz\n");
	Imprime(mat);
	printf("Soma dos valores da 4ª linha: %d", soma);
}