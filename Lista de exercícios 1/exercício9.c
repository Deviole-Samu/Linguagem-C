#include <stdio.h>

#include <stdlib.h>

// Variáveis
float x, y, aux;

int main() {
    printf("Troca de valores\n");

    printf("Me diga um valor para X: ");
    scanf("%f", &x);

    printf("Me diga um valor para Y: ");
    scanf("%f", &y);

    aux = x;
    x = y;
    y = aux;

    /** 
    x = x + y;
    y = x - y;
    x = x - y;
    **/
   
    printf("Seu X é igual a %.1f", x);
    printf("\nSeu y é igual a %.1f", y);
}