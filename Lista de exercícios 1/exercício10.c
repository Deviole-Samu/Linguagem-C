#include <stdio.h>

#include <stdlib.h>

float valor_produto, taxa, valor_pos_taxa;

int main() {
    printf("Missão: compre bananas!\n\n");
    printf("Você foi na lojinha do seu Jorge para comprar banana, quanto que tava o preço? ");
    scanf("%f", &valor_produto);

    printf("Hmmm... que interessante, o valor da banana ai é %.2f$...", valor_produto);
    printf("\nCorrigindo... Era %.2f$, mas parece que sofreu um aumento devido a inflação.\n", valor_produto);
    printf("Me fale em quantos por cento a inflação aumentou. (não precisa do sinal): ");
    scanf("%f", &taxa);

    valor_produto = valor_produto * (1 + taxa/100);

    printf("O valor das bananas subiram para %.2f$", valor_produto);
}