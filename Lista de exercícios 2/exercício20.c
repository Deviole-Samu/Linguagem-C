#include <stdio.h>

//Constantes
const int
    FAIXA1 = 50,
    FAIXA2 = 100;

const float
    VALOR1 = 1,
    VALOR2 = 1.3,
    VALOR3 = 2;

//Variáveis
int consumo;

float
    restante1 = 0,
    restante2 = 0,
    preco = 0;

int main() {
    printf("--Calculo do valor da conta elétrica de casa--\n");
    printf("Valor do consumo: (kwh) ");
    scanf("%d", &consumo);

    if (consumo <= FAIXA1) {
        preco = consumo * VALOR1;
    }
    else if(consumo <= FAIXA2) {
        restante1 = consumo - FAIXA1;
        preco = FAIXA1 * VALOR1;
        preco += restante1 * VALOR2;
    }
    else {
        restante1 = consumo - FAIXA1;
        preco = FAIXA1 * VALOR1;
        restante2 = consumo - FAIXA2;
        preco += (FAIXA2 - FAIXA1) * VALOR2;
        preco += restante2 * VALOR3;
    }

    printf("O valor da conta foi de: %.2f\n", preco);
}