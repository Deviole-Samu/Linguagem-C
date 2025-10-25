#include <stdio.h>

//Constantes
const int
    IDADE_MINIMA = 18,
    IDADE_MAXIMA = 68;

const float
    ALTURA_MINIMA = 1.65,
    ALTURA_MAXIMA = 1.75,
    PESO_MINIMO = 70,
    PESO_MAXIMO = 80;

//Variáveis
int idade;

float altura, peso;

int main() {
    printf("--Você é desejável? é oque veremos!--\n\n");
    printf("Quantos anos você tem? ");
    scanf("%i", &idade);

    printf("Qual a sua altura?(m) ");
    scanf("%f", &altura);

    printf("Qual o seu peso?(kg) ");
    scanf("%f", &peso);

    //Processamento & saida
    if((idade > IDADE_MINIMA) && (idade < IDADE_MAXIMA) && (altura > ALTURA_MINIMA) && (altura < ALTURA_MAXIMA) && (peso > PESO_MINIMO) && (peso < PESO_MAXIMO)) {
        printf("Parabéns!! Você é uma delícia...\n");
    }

    else {
        printf("Foi mal, mas tu é indesejável...\n");
    }
}