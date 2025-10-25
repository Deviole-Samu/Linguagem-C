//Inclusão das bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Constantes
const int N_FUN = 3;
const float LIMITE1 = 1000, LIMITE2 = 2000;

//Variáveis digitadas pelo usuário
float salario;
char sexo;
int departamento;

//Variáveis de processamento
float
    soma_sal = 0,
    soma_sal_f = 0,
    soma_sal_m = 0,
    maior_sal = 0,
    menor_sal = 100000,
    soma_dep1 = 0,
    soma_dep2 = 0,
    soma_dep3 = 0;
int
    cont_f = 0,
    cont_m = 0,
    cont_dep1 = 0,
    cont_dep2 = 0,
    cont_dep3 = 0,
    cont_faixa1 = 0,
    cont_faixa2 = 0,
    cont_faixa3 = 0;

int main() {
    setlocale(0, "Portuguese");
    printf("Cadrasto de Funcionários\n\n");

    for (int i = 1; i <= N_FUN; i++) {
        printf("\nFuncionário: %i", i);
        printf("\nInforme o salário: ");

        setbuf(stdin, NULL);
        scanf("%f", &salario);

        printf("\nInforme o sexo: ");
        printf("\n[F] - Feminino ou [M] - Masculino");
        printf("\n--> ");
        
        setbuf(stdin, NULL);
        scanf(" %c", &sexo);

        printf("\nInforme o Departamento: ");
        printf("\n[1] - Dep 1: TI");
        printf("\n[2] - Dep 2: RH");
        printf("\n[3] - Dep 3: MKT");
        printf("\n--> ");

        setbuf(stdin, NULL);
        scanf("%i", &departamento);

        //Processamento
        soma_sal = soma_sal + salario;

        if (sexo == 'f' || sexo == 'F') {
            soma_sal_f = soma_sal_f + salario;
            cont_f++;
        }

        else {
            soma_sal_m = soma_sal_m + salario;
            cont_m++;
        }

        if (salario > maior_sal) {
            maior_sal = salario;
        }

        if (salario < menor_sal) {
            menor_sal = salario;
        }

        if (departamento == 1) {
            soma_dep1 = soma_dep1 + salario;
            cont_dep1++;
        }

        else {
            if (departamento == 2) {
                soma_dep2 = soma_dep2 + salario;
                cont_dep2++;
            }

            else {
                soma_dep3 = soma_dep3 + salario;
                cont_dep3++;
            }
        }

        if (salario < LIMITE1) {
            cont_faixa1++;
        }

        else {
            if (salario <= LIMITE2) {
                cont_faixa2++;
            }

            else {
                cont_faixa3++;
            }
        }

        system("clear");
    }

    printf("---Resumo---");
    printf("\nMédia: R$ %.2f", soma_sal/N_FUN);

    printf("\n\nMédia Salarial - Feminino: R$ %.2f", soma_sal_f/cont_f);

    printf("\n\nMédia Salarial - Masculino: R$ %.2f", soma_sal_m/cont_m);

    printf("\n\nMaior Salario: R$ %.2f", maior_sal);
    printf("\n\nMenor Salario: R$ %.2f", menor_sal);

    printf("\n\nMédia Salarial Dep 1: R$ %.2f", soma_dep1/cont_dep1);
    printf("\n\nMédia Salarial Dep 2: R$ %.2f", soma_dep2/cont_dep2);
    printf("\n\nMédia Salarial Dep 3: R$ %.2f", soma_dep3/cont_dep3);

    printf("\n\nFuncionários da Faixa 1: %.2f %%", cont_faixa1*1.0/N_FUN*100);
    printf("\n\nFuncionários da Faixa 2: %.2f %%", cont_faixa2*1.0/N_FUN*100);
    printf("\n\nFuncionários da Faixa 3: %.2f %%", cont_faixa3*1.0/N_FUN*100);
}