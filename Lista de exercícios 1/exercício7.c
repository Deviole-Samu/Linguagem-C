//Bibliotecas
#include <stdio.h>

#include <stdlib.h>

//Constante
const float PI = 3.1415;

float raio, geratriz, area;

int main() {
    printf("Calculo para área de um cone\n");
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);
    printf("Insira o valor da geratriz: ");
    scanf("%f", &geratriz);
    
    #ifdef _WIN32
        system("cls");

    #else
        system("clear");
    
    #endif
    
    area = PI * raio * (raio + geratriz);
    printf("A área do cone é de: %.2f", area);
}