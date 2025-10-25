#include <stdio.h>

float area, largura, comprimento;

int main() {
    printf("-----Cálculo da Área de um Retângulo-----\n");
    printf("Insira a largura(cm): ");
    scanf("%f", &largura);
    printf("Insira o comprimento(cm): ");
    scanf("%f", &comprimento);
    area = comprimento * largura;
    printf("A área é %fcm", area);
}