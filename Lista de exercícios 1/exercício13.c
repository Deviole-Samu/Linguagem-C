#include <stdio.h>

#include <stdlib.h>

//Variaveis
float dolar, real, cotacao_dolar;

int main() {
    printf("-Conversor de Dolar para Real-\n\n");
    printf("Qual a cotação do dia?  ");
    scanf("%f", &cotacao_dolar);

    printf("\nQuantos reais quer converter?  ");
    scanf("%f", &real);

    //Processamento
    dolar = real * cotacao_dolar;

    //Saída
    printf("A converção de R$ %.2f na cotação do dolar a %.2f resultou em %.2f Dólares", real, cotacao_dolar, dolar);
}