#include <stdio.h>
#include <locale.h>

struct Pedido {
    long numPedido;
    int dia, mes, ano;
    float precoUnitario, valTotal;
    int qtd;
};

int main(int argc, char const *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    struct Pedido Comanda[3];
    float valorTotal = 0;

    printf("Informações dos pedidos:\n");

    for (int i = 0; i < 3; i++) {
        printf("\nPedido %d\n", i + 1);
        
        printf("Digite o número do pedido: ");
        scanf("%ld", &Comanda[i].numPedido);

        printf("Digite a data (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &Comanda[i].dia, &Comanda[i].mes, &Comanda[i].ano);

        printf("Digite a quantidade de itens: ");
        scanf("%d", &Comanda[i].qtd);

        printf("Digite o valor do item: ");
        scanf("%f", &Comanda[i].precoUnitario);

        Comanda[i].valTotal = Comanda[i].qtd * Comanda[i].precoUnitario;
        valorTotal += Comanda[i].valTotal;

        printf("Valor total do pedido %ld: R$ %.2f\n", Comanda[i].numPedido, Comanda[i].valTotal);
    }
    printf("\nValor total de todos os pedidos: R$ %.2f\n", valorTotal);

    return 0;
}
