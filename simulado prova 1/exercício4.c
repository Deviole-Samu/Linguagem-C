//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Constantes
const int COMPUTADORES = 300;
const float VALOR_FAIXA = 3000;

//Variáveis de entrada
float preco, valor_reparo;

//Variáveis de processamento
float
    media_precos = 0,
    media_reparos = 0,
    maior_reparo = 0,
    menor_reparo = 1000000;

int
    i = 1,
    quantidade_reparos = 0,
    cont_faixa1 = 0,
    cont_faixa2 = 0;

char reparo;

int main() {
    printf("--Informações sobre Computadores--\n\n");
    
    for (i; i <= COMPUTADORES; i++) {
        printf("Computador %i\n\n", i);
        printf("Insira o preço do computador: ");
        scanf("%f", &preco);

        printf("Esse computador precisou de reparo?\n");
        printf("--> [S] ou [s] para sim!\n");
        printf("--> [N] ou [n] para não!\n");
        scanf(" %c", &reparo);

        if (reparo == 'S' || reparo == 's') {
            printf("\nInsira o valor do reparo: ");
            scanf("%f", &valor_reparo);

            media_reparos = media_reparos + valor_reparo;
            quantidade_reparos++;

            if (valor_reparo > maior_reparo) {
                maior_reparo = valor_reparo;
            }

            if (valor_reparo < menor_reparo) {
                menor_reparo = valor_reparo;
            }
        }

        if (preco < VALOR_FAIXA) {
            cont_faixa1++;
        }

        else {
            cont_faixa2++;
        }

        system("clear");
    }

    printf("");
}