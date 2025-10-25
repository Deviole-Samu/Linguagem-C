#include <stdio.h>
#include <stdlib.h>

//Constantes
const int N_BOIS = 3;

//Variáveis
int idade, piquete, i;
float peso;

float 
    soma_peso = 0,
    menor_peso = 999,
    maior_peso = 0,
    soma_peso1 = 0,
    soma_peso2 = 0,
    soma_peso3 = 0;

int soma_idade = 0,
    cont_1 = 0,
    cont_2 = 0,
    cont_3 = 0,
    cont_abate = 0;

int main() {
    printf("---Bois---\n\n\n");

    //Entrada
    for (i = 1; i <= N_BOIS; i++) {
        printf("Informe a idade do boi em meses: ");
        scanf("%i", &idade);

        printf("Informe o peso em kgl: ");
        scanf("%f", &peso);

        printf("Informe o piquete:");
        printf("\n[1]-Piquete 1, [2]-Piquete 2, [3]-Piquete 3: ");
        scanf("%i", &piquete);

        system("clear");

        soma_peso = soma_peso + peso;
        soma_idade = soma_idade + idade;
        
        if (peso > maior_peso) {
            maior_peso = peso;
        }

        if (peso < menor_peso) {
            menor_peso = peso;
        }

        if (piquete == 1) {
            soma_peso1 = soma_peso1 + peso;
            cont_1++;
        }

        else {
            if (piquete == 2) {
                soma_peso2 = soma_peso2 + peso;
                cont_2++;
            }
            else {
                soma_peso3= soma_peso3 + peso;
                cont_3++;
            }
        }

        if (idade > 18 && peso > 500) {
            cont_abate++;
        }
    }

    printf("\n\nMédia de peso: %.2f", soma_peso/N_BOIS);
    printf("\nMédia das idades: %i Meses", soma_idade/N_BOIS);
    printf("\nPeso do boi mais pesado: %.2fkg", maior_peso);
    printf("\nPeso do boi mais leve: %.2f", menor_peso);
    printf("\nMédia de peso dos bois do Piquete 1: %.2f", soma_peso1/cont_1);
    printf("\nMédia de peso dos bois do Piquete 2: %.2f", soma_peso2/cont_2);
    printf("\nMédia de peso dos bois do Piquete 3: %.2f", soma_peso3/cont_3);
    printf("\n%% de bois p/ abate: %.f%%\n", cont_abate*1.0/N_BOIS * 100);
}