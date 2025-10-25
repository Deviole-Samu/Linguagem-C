#include <stdio.h>

//Variaveis
int numero1, numero2, numero3;

int main() {
    printf("--Qual o maior número?--\n");
    printf("Me escreva números inteiros e diferentes entre sí.\n\n");
    printf("Número 1: ");
    scanf("%i", &numero1);

    printf("Número 2: ");
    scanf("%i", &numero2);

    printf("Número 3: ");
    scanf("%i", &numero3);

    //Processamento
    if(numero1 > numero2 && numero1 > numero3) {
        printf("O número %i, é maior do que os outros dois!\n", numero1);
    }

    else if(numero2 > numero1 && numero2 > numero3) {
        printf("O número %i, é maior do que os outros dois!\n", numero2);
    }

    else {
        printf("O número %i, é maior do que os outros dois!\n", numero3);
    }
}