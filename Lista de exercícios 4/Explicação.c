/**
Array -> Vetores

int x[0] -> armazena a variável na memoria 0
int x[1] -> armazena a variável na memoria 1
int x[2] -> armazena a variável na memoria 2

ou

int x[i] -> armazena a variável no armazém i (usando o for)

tan -> tamanho

*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    float peso[3];

    // Armazenar valores válidos
    peso[0] = 45.2;
    peso[1] = 50.5;
    peso[2] = 60.0;

    // Inválido: fora do limite

    printf("Peso 0: %.2f", peso[0]);
    printf("Peso 1: %.2f", peso[1]);
    printf("Peso 2: %.2f", peso[2]);

    return 0;
}