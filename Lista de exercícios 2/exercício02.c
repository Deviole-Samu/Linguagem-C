#include <stdio.h>

#include <locale.h>

int numero;

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("-Teste de número par ou ímpar-\n\n");
    printf("Digiite um número: ");
    scanf("%i", &numero);

    if ((numero % 2) == 0) {
        printf("\nEste número e par");
    }

    else {
        printf("\nEste número e ímpar");
    }

    printf("\n\n\n");
}