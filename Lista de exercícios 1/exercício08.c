#include <stdio.h>

#include <stdlib.h>

const float Peso1 = 0.5, Peso2 = 0.3, Peso3 = 0.2, Nota_corte = 6;

// Variáveis
float nota1, nota2, nota3, media;

int main() {
    printf("Cálculo de uma média ponderada com 3 notas.\n");
    printf("Insira o valor da sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira o valor da sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira o valor da sua terceira nota: ");
    scanf("%f", &nota3);

    media = ((nota1 * Peso1) + (nota2 * Peso2) + (nota3 * Peso3)) / (Peso1 + Peso2 + Peso3);

    #ifdef _WIN32
        system("cls");

    #else 
        system("clear");
    #endif

    printf("O cálculo da média ponderada foi de %.2f", media);

    if(media >= Nota_corte)
        printf("\nParabéns, você passou!");

    else 
        printf("Sinto muito, você não passou...");
}