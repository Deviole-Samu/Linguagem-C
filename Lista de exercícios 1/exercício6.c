#include <stdio.h> //Inclusão da biblioteca

#include <stdlib.h>

//Inclusão das constantes
const float PI = 3.1415926536;

float area, raio;

int main() {
    printf("Calculo da área de um circunferência: ");
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);

    #ifdef _WIN32
        system("cls");
    
    #else
        system("clear");

    #endif

    area = raio * raio * PI;
    printf("O valor da area é de: %.2f", area);
}