#include <stdio.h>

//Constantes
const float 
    FAIXA1 = 1000,
    FAIXA2 = 2500,
    REAJUSTE1 = 0.25,
    REAJUSTE2 = 0.2,
    REAJUSTE3 = 0.15;

//Variáveis
float salario, valor_reajuste = 0;

int main() {
    printf("---Cálculo reajuste salarial---\n\n");
    printf("Informe o valor do seu salário atual: ");
    scanf("%f", &salario);

    //Processamento
    if(salario < FAIXA1) {
        valor_reajuste = salario * (1 + REAJUSTE1);
    }

    else if(salario <= FAIXA2) {
        valor_reajuste = salario * (1 + REAJUSTE2);
    }

    else {
        valor_reajuste = salario * (1 + REAJUSTE3);
    }

    //Saída
    printf("Seu salario de R$%.2f, ficou em R$%.2f após o reajuste.\n", salario, valor_reajuste);
}