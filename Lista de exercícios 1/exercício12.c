#include <stdio.h>
#include <stdlib.h>

float celsius, fahrenheit;

int main() {
    printf("Cálculo para conversão de temperatura - Farenheit para Celsius.\n");

    printf("Insira o valor da temperatura em Farenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;

    printf("A conversão de %.2fº Fahrenheit para graus Celsius resultou em: %.2fº", fahrenheit, celsius);
}