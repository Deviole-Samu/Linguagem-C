#include <stdio.h>
#include <strings.h>

int main() {
    //Constantes
    const  int N_FUN = 100;

    //Variáveis Entrada
    //Vetores
    float salarios[N_FUN];
    char setores[N_FUN][11];

    //Variáveis Processamento
    //Item a, b, c
    float
        soma_sal_vendas = 0,
        soma_sal_producao = 0,
        soma_sal_comercial = 0,
        media_sal_vendas = 0,
        media_sal_producao = 0,
        media_sal_comercial = 0;

    int
        n_fun_vendas = 0,
        n_fun_producao = 0,
        n_fun_comercial = 0;

    //Item d
    float
        soma_sal_total = 0,
        media_sal_total = 0;

    int cont_acima = 0;

    //Item e
    int
        cont_abaixo_vendas = 0,
        cont_abaixo_producao = 0,
        cont_abaixo_comercial = 0;

    //Início
    printf("--- Cadastro de novos funcionários ---");

    for(int i = 0; i < N_FUN; i++) {
        printf("\n\n--Funcionário nº%i--", i + 1);
        printf("\nSalário (R$): ");
        scanf("%f", &salarios[i]);
        while(salarios[i] < 1500) {
            printf("\nEscravos já não são mais aceitos!");
            printf("\nDigite um salário ao menos no valor de um salário mínimo: ");
            scanf("%f", &salarios[i]);
        }

        printf("\n--Setor.\n\nVendas\nProducao\nComercial\n--> ");
        scanf(" %10s", setores[i]);
        
        while(strcasecmp(setores[i], "vendas") != 0 && strcasecmp(setores[i], "producao") != 0 && strcasecmp(setores[i], "comercial") != 0) {
            printf("\nSetor inválido!");
            printf("\nInforme um dos setores abaixo:\n\nVendas\nProducao\nComercial\n--> ");
            scanf(" %10s", setores[i]);
        }

        if(strcasecmp(setores[i], "vendas") == 0) {
            soma_sal_vendas += salarios[i];
            n_fun_vendas++;
        }
        else if(strcasecmp(setores[i], "producao") == 0) {
            soma_sal_producao += salarios[i];
            n_fun_producao++;
        }
        else {
            soma_sal_comercial += salarios[i];
            n_fun_comercial++;
        }


    }

    soma_sal_total = soma_sal_vendas + soma_sal_producao + soma_sal_comercial;
    media_sal_total = soma_sal_total / N_FUN;
    media_sal_vendas = soma_sal_vendas / n_fun_vendas;
    media_sal_comercial = soma_sal_comercial / n_fun_comercial;
    media_sal_producao = soma_sal_producao / n_fun_producao;

    for(int i = 0; i < N_FUN; i++) {
        if(salarios[i] >= media_sal_total) {
            cont_acima++;
        }

        if(strcasecmp(setores[i], "vendas") == 0 && salarios[i] < media_sal_total) {
            cont_abaixo_vendas++;
        }
        else if(strcasecmp(setores[i], "producao") == 0 && salarios[i] < media_sal_total) {
            cont_abaixo_producao++;
        }
        else if(strcasecmp(setores[i], "comercial") == 0 && salarios[i] < media_sal_total) {
            cont_abaixo_comercial++;
        }
    }

    //Saída
    printf("\n\n=== Estatísticas ===\n\n");
    printf("\n--Média Salarial dos Setores--");
    printf("\nVendas: R$%.2f", media_sal_vendas);
    printf("\nProdução: R$%.2f", media_sal_producao);
    printf("\nComercial: R$%.2f", media_sal_comercial);
    printf("\n\n--Quantidade de funcionários de cada setor--");
    printf("\nVendas: %i", n_fun_vendas);
    printf("\nProdução: %i", n_fun_producao);
    printf("\nComercial: %i", n_fun_comercial);
    printf("\n\n--Porcentagem de funcionários de cada setor--");
    printf("\nVendas: %.2f%%", n_fun_vendas * 1.0 / N_FUN * 100);
    printf("\nProdução: %.2f%%", n_fun_producao * 1.0 / N_FUN * 100);
    printf("\nComercial: %.2f%%", n_fun_comercial * 1.0 / N_FUN * 100);
    printf("\n\nRelações salariais:");
    printf("\nPorcentagem de funcionários com salário acima ou igual à média salarial geral: %.2f%%", cont_acima * 1.0 / N_FUN * 100);
    printf("\nPorcentagem de funcionários com salário abaixo da média salarial geral no setor de vendas: %.2f%%", cont_abaixo_vendas * 1.0 / n_fun_vendas * 100);
    printf("\nPorcentagem de funcionários com salário abaixo da média salarial geral no setor de produção: %.2f%%", cont_abaixo_producao * 1.0 / n_fun_producao * 100);
    printf("\nPorcentagem de funcionários com salário abaixo da média salarial geral no setor comercial: %.2f%%", cont_abaixo_comercial * 1.0 / n_fun_comercial * 100);
    return 0;
}