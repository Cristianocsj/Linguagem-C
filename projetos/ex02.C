#include <stdio.h>
#include <locale.h>
#define L 3
#define C 3

void Preenche(int M[L][C]){
	int i, j;
	for(i=0;i<L;i++){
		for(j=0;j<C;j++){
			printf("Digite um número inteiro: ");
			scanf("%d", &M[i][j]);
		}
	}
}

void Imprime(int M[L][C]){
	int i, j;
	for(i=0;i<L;i++){
		for(j=0;j<C;j++){
			printf("%d   ", M[i][j]);
		}
		printf("\n");
	}
}

int SomaColuna(int M[L][C]){
	int i, somacoluna=0;
	for(i=0;i<L;i++){
		somacoluna = somacoluna + M[i][0];
	}
	return somacoluna;
}

int ProdLinha(int M[L][C]){
	int j, prodlinha=1;
	for(j=0;j<C;j++){
		prodlinha = prodlinha * M[0][j];
	}
	return prodlinha;
}

int SomaTotal(int M[L][C]){
	int i, j, somatotal=0;
	for(i=0;i<L;i++){
		for(j=0;j<C;j++){
			somatotal = somatotal + M[i][j];
		}
	}
	return somatotal;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int mat[L][C];
	
	Preenche(mat);
	printf("Matriz\n");
	Imprime(mat);
	printf("\nSoma dos valores da 1ª coluna: %d\n", SomaColuna(mat));
	printf("\nProduto dos valores da 1ª linha: %d\n", ProdLinha(mat));
	printf("\nSoma total dos valores: %d\n", SomaTotal(mat));
}