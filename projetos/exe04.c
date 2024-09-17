#include <stdio.h>
#include <locale.h>

struct Cartao
{
    int idade;
    int sexo;
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int i = 1, contP = 0, contI = 0, cont_mulher_18_15 = 0, contH = 0;
    float mediaIdade;
    struct Cartao cartao;

    printf("Digite a idade da pessoa %d: ", i);
    scanf("%d", &cartao.idade);

    while (cartao.idade > 0)
    {
        contP++;
        contI += cartao.idade;

        printf("Digite 0 para o sexo masculino e 1 para feminino: ");
        scanf("%d", &cartao.sexo);

        if(cartao.idade > 17 && cartao.idade < 26 && cartao.sexo == 1)
        {
            cont_mulher_18_15++;
        }
        if(cartao.sexo == 0)
        {
            contH++;
        }

        i++;
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &cartao.idade);
    }

    if (contP > 0) {
        mediaIdade = (float)contI / contP;
        printf("\nMédia das idades: %.2f\n", mediaIdade);
    } else {
        printf("\nNenhuma pessoa foi cadastrada.\n");
    }

    printf("Quantidade de mulheres na faixa entre 18 e 25: %d\n", cont_mulher_18_15);
    printf("Quantidade de homens: %d\n", contH);

    return 0;
}
