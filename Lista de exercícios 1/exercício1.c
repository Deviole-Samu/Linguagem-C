#include <stdio.h>

float media, nota1, nota2;

int main() {
    printf("Calculo da media\n");
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2)/2;
    printf("A sua média foi de: %.2f", media);
}