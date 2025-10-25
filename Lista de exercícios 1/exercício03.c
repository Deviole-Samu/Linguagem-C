#include <stdio.h> //biblioteca(s) importada(s)

//Variáveis
float base, altura, area;

int main() {
    printf("Calculo da área de um triângulo\n");
    printf("Insira o valor da base(cm): ");
    scanf("%f", &base);
    printf("Insira o valor da altura(cm): ");
    scanf("%f", &altura);
    area = base * altura / 2;
    printf("A área do triangulo é de %.1fcm", area);
}