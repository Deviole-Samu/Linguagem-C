//Inclusão de bibliotecas
#include <stdio.h> 

#include <math.h>

//Variáveis
const float PI = 3.1415;

float r1, v1, h1;

int main() {
    printf("-----Calculo do volume de um cilindro-----");
    printf("\nInsira o raio da figura: ");
    scanf("%f", &r1);
    printf("Insira a altura da figura: ");
    scanf("%f", &h1);
    v1 = PI * r1 * r1 * h1;
    printf("Volume: %.2f", v1);
}