#include <stdio.h>

int main() {
    //Constantes
    const int
        FAIXA1 = 50,
        FAIXA2 = 100,
        FAIXA3 = 150;
    
    const float
        ICMS = 0.18,
        PIS = 0.0077,
        VALOR_FAIXA1 = 1.05,
        VALOR_FAIXA2 = 1.55,
        VALOR_FAIXA3 = 2.05,
        VALOR_FAIXA4 = 2.55;
    
    //Variáveis de entrada
    int consumo;

    //Variáveis de processamento
    float
        preco_consumo = 0,
        preco_icms = 0,
        preco_pis = 0,
        preco_total = 0;

    //Entrada
    printf("--- Cálculo de Consumo de Energia ---\n\n");
    printf("Insira o valor do consumo de energia (KWH): ");
    scanf("%i", &consumo);

    //Processamento
    if(consumo <= FAIXA1)
        preco_consumo = consumo * VALOR_FAIXA1;
    
    else if(consumo <= FAIXA2)
        preco_consumo = consumo * VALOR_FAIXA2;
    
    else if(consumo <= FAIXA3)
        preco_consumo = consumo * VALOR_FAIXA3;
    
    else
        preco_consumo = consumo * VALOR_FAIXA4;
    
    preco_pis = preco_consumo * PIS;
    preco_icms = preco_consumo * ICMS;
    preco_total = preco_consumo + preco_icms + preco_pis;

    //Saída
    printf("\n--- Resultados ---");
    printf("\nO valor do consumo de %i(KWH): R$%.2f.", consumo, preco_consumo);
    printf("\n\n--> Impostos:");
    printf("\nICMS: R$%.2f", preco_icms);
    printf("\nPIS: R$%.2f", preco_pis);
    printf("\n\n--> Valor total: R$%.2f", preco_total);

    printf("\n");
    return 0;
}