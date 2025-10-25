#include <stdio.h>

//Constantes
const int 
    FAIXA1 = 30,
    FAIXA2 = 20,
    FAIXA3 = 10;

const float
    CUSTO1 = 2.5,
    CUSTO2 = 2,
    CUSTO3 = 1.5,
    CUSTO4 = 1.2;

//Variáveis
int consumo;
float valor_conta = 0;

int main() {
    printf("---Cálculo da conta de água p/consumo para M³---\n\n");
    printf("Insira o valor do consumo: ");
    scanf("%i", &consumo);

    //Processamento
    if(consumo > FAIXA1) {
        valor_conta = consumo * CUSTO1;
    }

    else if(consumo > FAIXA2) {
        valor_conta = consumo * CUSTO2;
    }

    else if(consumo > FAIXA3) {
        valor_conta = consumo * CUSTO3;
    }

    else {
        valor_conta = consumo * CUSTO4;
    }

    //Saída
    printf("O consumo de %iM³ resultou em uma conta no valor de R$%.2f.\n\n", consumo, valor_conta);

    return 0;
}