#include <stdio.h>

//Constantes
const int REQUISITO1 = 400, REQUISITO2 = 100, REQUISITO3 = 4;

//Variáveis
int ano;

int main() {
    printf("-Verificação de ano bissexto-\n\n");
    printf("Insira o ano que deseja saber se é bissexto: ");
    scanf("%i", &ano);

    if ((ano % REQUISITO3 == 0 && ano % REQUISITO2 != 0) || (ano % REQUISITO1 == 0)) {
        printf("É um ano bissexto!");
    }

    else {
        printf("Não é um ano bissexto!");
    }

    return 0;
}