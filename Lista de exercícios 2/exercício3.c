#include <stdio.h> 

//Constantes
const int LIMITE = 10;
const float VALOR_1 = 1.2, VALOR_2 = 1.5;

//Variáveis
int consumo;
float conta = 0;

int main() {
    printf("-Calculo da conta de água-\n\n");
    printf("Insira o valor consumido: ");
    scanf("%i", &consumo);

    //Procesamento
    if (consumo > LIMITE) {
        conta = consumo * VALOR_2;
    }

    else {
        conta = consumo * VALOR_1;
    }

    //Saída
    printf("A conta resultou em R$%.2f\n\n\n", conta);
}