//Biblioteca
#include <stdio.h>
#include <stdlib.h>

//Constantes
const float ICMS = 0.25, PIS = 0.0077, CONFINS = 0.0356, TAXA1 = 2.37, TAXA2 = 3.42, TAXA3 = 5, LIMITE1 = 15, LIMITE2 = 20;

//Variáveis
int consumo;
float gasto_total, valor_icms, valor_pis, valor_confins;

int main() {
    printf("-Cálculo para gasto de gás-");
    printf("\nInsira o valor do consumo (M³): ");

    //Entrada
    scanf("%i", &consumo);

    //Processamento
    valor_icms = consumo * ICMS;
    valor_pis = consumo * PIS;
    valor_confins = consumo * CONFINS;

    gasto_total = consumo + valor_icms + valor_pis + valor_confins;

    if (consumo <= LIMITE1) {
        gasto_total = TAXA1 * gasto_total;
    }

    else {
        if (consumo <= LIMITE2) {
            gasto_total = TAXA2 * gasto_total;
        }

        else {
            gasto_total = TAXA3 * gasto_total;
        }
    }

    //Saída
    printf("Pressione ENTER para continuar...");
    getchar(); // para capturar o ENTER que sobrou do scanf
    getchar(); // espera o ENTER do usuário

    system("clear");

    printf("O valor consumido é de %i M³ gerou o custo de R$ %.2f\n\n", consumo, gasto_total);
    printf("O desconto do ICMS foi de: R$ %.2f\n", valor_icms);
    printf("O desconto do PIS foi de: R$ %.2f\n", valor_pis);
    printf("O desconto do CONFINS foi de: R$ %.2f\n", valor_confins);

    return 0;
}