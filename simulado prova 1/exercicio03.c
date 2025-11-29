#include <stdio.h>

int main() {
    //Constantes Imposto
    const float
        FGTS = 0.08,
        INSS = 0.11;
    
    //Constantes Acrescimo
    const float 
        DSR = 0.15;

    //Variáveis de entrada
    int horas_trabalhadas;
    float valor_hora;

    //Variáveis de processamento
    float
        salario_bruto = 0,
        valor_inss = 0,
        valor_fgts = 0,
        valor_dsr = 0,
        salario_liquido = 0;

    //Processamento
    printf("--- Cálculo de Salário ---\n\n");
    printf("Quantidade de horas trabalhadas (por mês): ");
    scanf("%i", &horas_trabalhadas);

    while (horas_trabalhadas <= 0) {
        printf("Valor inválido! Digite horas trabalhadas novamente: ");
        scanf("%i", &horas_trabalhadas);
    }

    printf("Valor por hora: ");
    scanf("%f", &valor_hora);

    while (valor_hora <= 0) {
        printf("Valor inválido! Digite o valor por hora novamente: ");
    }

    //Processamento
    salario_bruto = valor_hora * horas_trabalhadas;

    valor_dsr = salario_bruto * DSR;

    valor_inss = salario_bruto * INSS;
    valor_fgts = salario_bruto * FGTS;

    salario_liquido = salario_bruto - valor_inss - valor_fgts + valor_dsr;

    //Saída
    printf("\n\n--- Valores ---");
    printf("\n\nSalário bruto: R$%.2f", salario_bruto);

    printf("\n\n- Impostos");
    printf("\nFGTS: R$%.2f", valor_fgts);
    printf("\nINSS: R$%.2f", valor_inss);

    printf("\n\n- Acrécimos");
    printf("\nDSR: R$%.2f", valor_dsr);
    
    printf("\n\n-- Salário liquido: R$%.2f", salario_liquido);

    printf("\n");
    return 0;
}