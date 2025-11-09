#include <stdio.h>
#include <stdlib.h>

const int
    N_FUN = 1500,
    FAIXA_1 = 1000,
    FAIXA_2 = 2000;

float sal;
char sexo, dep;

float
    media_sal = 0,
    soma_sal = 0,
    media_sal_f = 0,
    media_sal_m = 0,
    soma_sal_f = 0,
    soma_sal_m = 0,
    maior_sal = 0,
    menor_sal = 1000000,
    soma_sal_dep_1 = 0,
    media_sal_dep_1 = 0,
    soma_sal_dep_2 = 0,
    media_sal_dep_2 = 0;

int
    i,
    cont_f = 0,
    cont_m = 0,
    cont_dep_1 = 0,
    cont_dep_2 = 0,
    cont_menos_faixa_1 = 0,
    cont_menos_faixa_2 = 0,
    cont_mais_faixa_2 = 0;

int main() {
    printf("- Dados sobre os colaboradores -\n\n");
    
    for (i = 1; i <= N_FUN; i++) {
        printf("Colaborador %i.\n", i);

        printf("Informe seu salário: ");
        scanf("%f", &sal);

        printf("Qual o seu sexo biológico? [M] Masculino, [F] Feminino: ");
        scanf(" %c", &sexo);

        printf("Qual o seu departamento? [1] Departamento 1, [2] Departamento 2: ");
        scanf(" %c", &dep);
        
        system("clear"); // ou "cls" no Windows

        soma_sal += sal;
        media_sal = soma_sal / N_FUN;

        if (sexo == 'M' || sexo == 'm') {
            cont_m++;
            soma_sal_m += sal;
        } else {
            cont_f++;
            soma_sal_f += sal;
        }

        if (sal > maior_sal)
            maior_sal = sal;
        
        if (sal < menor_sal)
            menor_sal = sal;

        if (dep == '1') {
            cont_dep_1++;
            soma_sal_dep_1 += sal;
        } else {
            cont_dep_2++;
            soma_sal_dep_2 += sal;
        }

        if (sal < FAIXA_1)
            cont_menos_faixa_1++;
        else if (sal < FAIXA_2)
            cont_menos_faixa_2++;
        else
            cont_mais_faixa_2++;
    }

    if (cont_m > 0)
        media_sal_m = soma_sal_m / cont_m;
    if (cont_f > 0)
        media_sal_f = soma_sal_f / cont_f;
    if (cont_dep_1 > 0)
        media_sal_dep_1 = soma_sal_dep_1 / cont_dep_1;
    if (cont_dep_2 > 0)
        media_sal_dep_2 = soma_sal_dep_2 / cont_dep_2;

    printf("A média salarial total foi de R$ %.2f.\n", media_sal);
    printf("A média salarial de pessoas do sexo feminino foi de R$ %.2f.\n", media_sal_f);
    printf("A média salarial de pessoas do sexo masculino foi de R$ %.2f.\n", media_sal_m);
    printf("O salário mais baixo foi de R$ %.2f.\n", menor_sal);
    printf("O salário mais alto foi de R$ %.2f.\n", maior_sal);
    printf("A média salarial do departamento 1 foi de R$ %.2f.\n", media_sal_dep_1);
    printf("A média salarial do departamento 2 foi de R$ %.2f.\n", media_sal_dep_2);
    printf("%% de funcionários com salário até R$ %i: %.2f%%\n", FAIXA_1, cont_menos_faixa_1 * 100.0 / N_FUN);
    printf("%% de funcionários com salário entre R$ %i e R$ %i: %.2f%%\n", FAIXA_1, FAIXA_2, cont_menos_faixa_2 * 100.0 / N_FUN);
    printf("%% de funcionários com salário acima de R$ %i: %.2f%%\n", FAIXA_2, cont_mais_faixa_2 * 100.0 / N_FUN);

    return 0;
}