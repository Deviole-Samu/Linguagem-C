#include <stdio.h>

//Contantes
float PRECO1 = 2.37, PRECO2 = 3.42;
int ICMS = 25, LIMITE = 15;

//Variáveis
int consumo, esgoto;
float conta;

int main() {
    printf("-Cálculo para o valor da conta de água-\n\n");
    printf("\nMe insira o valor do consumo: ");
    scanf("%i", &consumo);

    //Processamento
    esgoto = consumo;

    if (consumo > LIMITE) {
        conta = (consumo + esgoto) * PRECO2;
    }

    else {
        conta = (consumo + esgoto) * PRECO1;
    }

    conta = conta + conta * ICMS / 100;

    //Saída
    printf("\nO consumo de %i M³ resultou em na conta de R$ %.2f\n", consumo, conta);
    printf("Foi aplicada uma taxa de %i %% do ICMS\n", ICMS);

    if (consumo > LIMITE) {
        printf("Utilizando o valor de R$%.2f como cotação\n", PRECO2);
    }

    else {
        printf("Utilizando o valor de R$%.2f como cotação\n", PRECO1);
    }

    return 0;
}