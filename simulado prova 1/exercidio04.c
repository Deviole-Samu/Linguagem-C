#include <stdio.h>
#include <ctype.h>
#include <float.h>

int main() {
    //Constantes
    const int PESSOAS = 6;
    
    //Variáveis de entrada
    float salarios[PESSOAS];
    char sexos[PESSOAS];

    //Variáveis de processamento
    float
        media_salarial_geral = 0,
        media_salarial_masculino = 0,
        media_salarial_feminino = 0,
        soma_salarial_geral = 0,
        soma_salarial_masculino = 0,
        soma_salarial_feminino = 0,
        maior_salario = 0,
        menor_salario = FLT_MAX;
    
    //Contadores
    int
        cont_masculino = 0,
        cont_feminino = 0;
    
    //Início do programa
    printf ("--- Coleta de Dados Pessoais ---\n");

    for (int i = 0; i < PESSOAS; i++) {
        printf ("\n--- Pessoa %i ---\n", i + 1);

        printf ("\nInsira o salário: ");
        scanf ("%f", &salarios[i]);

        while (salarios[i] < 0) {
            printf ("\nInforme um valor válido para o salário! ");
            scanf ("%f", &salarios[i]);
        }

        printf ("\nInforme o sexo\n[F] - Feminino\n[M] - Masculino\n--> ");
        scanf (" %c", &sexos[i]);
        sexos[i] = toupper(sexos[i]);

        while (sexos[i] != 'M' && sexos[i] != 'F') {
            printf ("\nInforme um valor válido para o sexo!\n[F] - Feminino\n[M] - Masculino\n--> ");
            scanf (" %c", &sexos[i]);
            sexos[i] = toupper(sexos[i]);
        }

        soma_salarial_geral += salarios[i];

        if (sexos[i] == 'M') {
            cont_masculino++;
            soma_salarial_masculino += salarios[i];
        } else {
            cont_feminino++;
            soma_salarial_feminino += salarios[i];
        }

        if (salarios[i] > maior_salario)
            maior_salario = salarios[i];
        
        if (salarios[i] < menor_salario)
            menor_salario = salarios[i];
    }

    media_salarial_geral = soma_salarial_geral / PESSOAS;

    if (cont_masculino > 0 )
        media_salarial_masculino = soma_salarial_masculino / cont_masculino;

    else
        media_salarial_masculino = 0;
    
    if (cont_feminino > 0) 
        media_salarial_feminino = soma_salarial_feminino / cont_feminino;
    
    else
        media_salarial_feminino = 0;
    
    //Saída
    printf("\n=== Informações ===\n");

    printf("\nMédia salarial R$%.2f", media_salarial_geral);
    printf("\nMédia salarial feminina R$%.2f", media_salarial_feminino);
    printf("\nMédia salarial mascu]);lina R$%.2f", media_salarial_masculino);
    printf("\nMaior salário: R$%.2f", maior_salario);
    printf("\nMenor salário: R$%.2f", menor_salario);

    printf("\n");
    return 0;
}