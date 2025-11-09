#include <stdio.h>
#include <stdlib.h>

int main() {
    const int TAM = 5;
    const float LIMITE = 5000;

    float media, soma = 0, maior_sal = 0, menor_sal;
    int cont_faixa1 = 0, cont_faixa2 = 0, cont_abaixo = 0, cont_acima =0;
    float salarios[TAM];

    printf("Programa de Cálculos Salariais\n");

    for (int i = 0; i < TAM; i++) {
        printf("\n\nInforme o salário %i: ", i+1);
        scanf("%f", &salarios[i]);
        soma += salarios[i];

        if (i == 0) {
            maior_sal = menor_sal = salarios[i];
        } else {
            if (salarios[i] > maior_sal)
                maior_sal = salarios[i];

            if (salarios[i] < menor_sal)
                menor_sal = salarios[i];
        }

        if (salarios[i] < LIMITE)
            cont_faixa1++;

        else
            cont_faixa2++;
    }

    media = soma / TAM;

    for (int i = 0; i < TAM; i++) {
        if (salarios[i] < media)
            cont_abaixo++;
        else
            cont_acima++;
    }

    printf("\n--- Estatísticas ---");
    printf("\nMédia salarial: R$ %.2f", media);
    printf("\nMenor salário: R$ %.2f", menor_sal);
    printf("\nMaior salário: R$ %.2f", maior_sal);
    printf("\n\nPercentuais em relação a R$ %.2f:", LIMITE);
    printf("\n  - Abaixo: %.2f%%", cont_faixa1 * 100.0 / TAM);
    printf("\n  - Acima: %.2f%%", cont_faixa2 * 100.0 / TAM);
    printf("\n\nPercentuais em relação à média salarial:");
    printf("\n  - Abaixo da média: %.2f%%", cont_abaixo * 100.0 / TAM);
    printf("\n  - Acima da média: %.2f%%\n", cont_acima * 100.0 / TAM);

    /*
    for (int i = 0; i < TAM; i++) {
        printf("\n\nSalário %i = %0.2f", i+1, salarios[i]);
    }
    */

    return 0;
}