#include <stdio.h>
#include <stdlib.h>

const float 
    TAXA_FGTS = 0.08,
    TAXA_INSS = 0.11,
    BONUS_PROFESSOR = 0.02;

int main() {
    float 
        salario_bruto = 0,
        valor_fgts = 0,
        valor_inss = 0,
        salario_liquido = 0,
        valor_bonus = 0;
    char professor;

    printf("---Cálculo de salário líquido de funcionário---\n\n");
    printf("Insira o valor do seu salário bruto: ");
    scanf("%f", &salario_bruto);

    printf("\nVocê é professor? [S/s] para sim, [N/n] para não: ");
    scanf(" %c", &professor);

    valor_fgts = salario_bruto * TAXA_FGTS;
    valor_inss = salario_bruto * TAXA_INSS;

    salario_liquido = salario_bruto - valor_inss;

    if (professor == 'S' || professor == 's') {
        valor_bonus = salario_liquido * BONUS_PROFESSOR;
        salario_liquido += valor_bonus;
    }

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    printf("Seu salário bruto: R$%.2f\n", salario_bruto);
    printf("INSS (11%%): R$%.2f\n", valor_inss);
    printf("FGTS (8%%): R$%.2f (depositado pela empresa)\n", valor_fgts);
    
    if (professor == 'S' || professor == 's') {
        printf("Bônus professor (2%%): R$%.2f\n", valor_bonus);
    }

    printf("------------------------------------------\n");
    printf("Salário líquido: R$%.2f\n", salario_liquido);
    printf("------------------------------------------\n\n");

    return 0;
}
