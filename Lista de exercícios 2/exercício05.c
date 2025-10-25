#include <stdio.h>

const int LIMITE = 100;
const float desconto = 0.85, adicional = 1.1, valor = 0.85;

//Variaveis
int consumo;
float conta;

int main() {
    printf("-Calculo de conta elétrica-\n\n");
    printf("Insira o valor do consumo: ");
    scanf("%i", &consumo);

    //Processamento
    if (consumo > LIMITE) {
        conta = consumo * adicional * valor;
    }

    else {
        conta = consumo * desconto * valor;
    }

    //Saída
    printf("Sua conta de energia resultou em R$ %.2f\n\n", conta);
}