#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Não precisa colocar verificação de maiúsculo ou minúsculo no char
#include <float.h> //Para não sofrer com o número mágico no menor reparo

int main() {
    //Constantes
    const int NUMERO_COMPUTADORES = 300;
    const float VALOR_FAIXA = 3000.00;

    //Variáveis de entrada
    float preco, valor_reparo;
    char reparo;

    //Variáveis de processamento e saída
    float
        soma_precos = 0,
        media_precos = 0,
        soma_reparos = 0,
        media_reparos = 0,
        maior_reparo = 0,
        menor_reparo = FLT_MAX;
    
    int 
        cont_reparos = 0,
        cont_acima = 0,
        cont_abaixo = 0;

    //Entrada
    printf("--- Avaliação de Computadores ---\n\n");
    
    for(int i = 1; i <= NUMERO_COMPUTADORES; i++) {
        printf("\n---\nComputador %i", i);
        printf("\n\nInsíra o valor avaliado (R$): ");
        scanf("%f", &preco);

        printf("\nA máquina precisa de reparos?\n[S] - Sim\n[N] - Não\n--> ");
        scanf(" %c", &reparo);
        reparo = toupper(reparo);

        if (reparo == 'S') {
            cont_reparos++;
            
            printf("\nInsíra o valor do reparo (R$): ");
            scanf("%f", &valor_reparo);

            soma_reparos += valor_reparo;

            if(valor_reparo > maior_reparo)
            maior_reparo = valor_reparo;
        
            if(valor_reparo < menor_reparo)
            menor_reparo = valor_reparo;
        }

        soma_precos += preco;
        
        if(preco >= VALOR_FAIXA)
            cont_acima++;
        else
            cont_abaixo++;
    }

    media_precos = soma_precos / NUMERO_COMPUTADORES;

    if(cont_reparos > 0)
        media_reparos = soma_reparos / cont_reparos;
    else
        media_reparos = 0;
        menor_reparo = 0;

    //Saída
    printf("\n--- Resultados ---\n");
    printf("\nA média de preços: R$%.2f.", media_precos);
    printf("\nA média de valor dos reparos: R$%.2f.", media_reparos);
    printf("\nO valor do reparo mais alto: R$%.2f", maior_reparo);
    printf("\nO valor do reparo mais baixo: R$%.2f", menor_reparo);
    printf("\nA quantidade total de reparos: %i", cont_reparos);
    printf("\nA porcentagem de computadores avaliados igual ou acima de R$%.2f: %.2f%%", VALOR_FAIXA, cont_acima * 1.0 / NUMERO_COMPUTADORES * 100);
    printf("\nA porcentagem de computadores avaliados abaixo de R$%.2f: %.2f%%\n", VALOR_FAIXA, cont_abaixo * 1.0 / NUMERO_COMPUTADORES * 100);

    return 0;
}