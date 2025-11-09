#include <stdio.h>
#include <stdlib.h>

int main() {
    const int TAM = 3;
    const int IDADE_MINIMA = 18, PESO_MINIMO = 500;

    float soma_peso = 0, maior_peso = 0, menor_peso = 100000;

    int soma_idade = 0, qtd_maior = 0, qtd_menor = 0, cont_abate = 0, cont_inf = 0;

    float media_peso;
    
    int media_idade;

    float pesos[TAM];
    int idades[TAM];

    //Entrada
    for (int i = 0; i < TAM; i++) {
        printf("Digite o peso do boi %i: ", i + 1);
        scanf("%f", &pesos[i]);

        printf("Digite a idade do boi %i: ", i + 1);
        scanf("%i", &idades[i]);

        system("clear");

        //Processamento
        soma_peso += pesos[i];
        soma_idade += idades[i];

        if (pesos[i] > maior_peso) {
            maior_peso = pesos[i];
            qtd_maior = 1;
        } else if (pesos[i] == maior_peso) {
            qtd_maior++;
        }

        if (pesos[i] < menor_peso) {
            menor_peso = pesos[i];
            qtd_menor = 1;
        } else if (pesos[i] == menor_peso) {
            qtd_menor++;
        }
        

        if (idades[i] > IDADE_MINIMA && pesos[i] > PESO_MINIMO) {
            cont_abate++;
        }
    }

    media_peso = soma_peso / TAM;
    media_idade = soma_idade / TAM;

    for (int i = 0; i < TAM; i++) {
        if (pesos[i] < media_peso && idades[i] < media_idade) {
            cont_inf++;
        }
    }

    printf("\nMedia de pesos: %.2f", media_peso);
    printf("\nMedia de idades: %i", media_idade);
    printf("\nPeso do boi mais pesado: %.2f - qtd: %i", maior_peso, qtd_maior);
    printf("\nPeso do boi menos pesado: %.2f - qtd: %i", menor_peso, qtd_menor);
    printf("\nBois para o abate: %.2f%%", cont_abate * 1.0 / TAM * 100);
    printf("\nBois abaixo da média: %.2f%%\n", cont_inf * 1.0 / TAM * 100);

    return 0;
}