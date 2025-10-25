#include <stdio.h>

int numero;

int main() {
    printf("-Verificação se um número é maior, menor ou igual a zero-\n\n");
    printf("Insira o número que deseja verificar: ");
    scanf("%i", &numero);

    //Processamento
    if (numero == 0) {
        printf("O seu número é igual a zero!\n\n");
    }

    else {
        if (numero > 0) {
            printf("É um número positivo!\n\n");
        }

        else {
            printf("É um número negativo!\n\n");
        }
    }
    
    return 0;
}