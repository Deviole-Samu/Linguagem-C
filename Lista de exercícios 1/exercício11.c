//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Variáveis
float numero, dobro, metade, quadrado, cubo;

//Início
int main() {
    //Entrada
    printf("Calculos com um número!\n\n");

    printf("Me diga um número: ");
    scanf("%f", &numero); //Entrada

    //Processamento
    dobro = 2 * numero;

    metade = numero / 2;

    quadrado = numero * numero;

    cubo = numero * numero * numero;

    //Saida
    printf("\nO dobro desse numero é %.f\nA metade %.2f\nSeu quadrado %.f\nSeu cubo %.f", dobro, metade, quadrado, cubo);
}