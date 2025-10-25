#include <stdio.h>

//Variáveis
int divisor, dividendo, resto;

int main() {
    printf("-Leitor de multiplos-\n\n");
    printf("Insira o número que deseja saber se é múltiplo: ");
    scanf("%i", &dividendo);

    printf("Insira de qual número acha ser: ");
    scanf("%i", &divisor);

    //Procesamento
    resto = dividendo % divisor;

    if (resto == 0) {
        printf("%i é multiplo de %i\n\n\n", dividendo, divisor);
    }

    else {
        printf("%i não é multiplo de %i\n\n\n", dividendo, divisor);
    }
}