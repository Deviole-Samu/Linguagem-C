#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    int maior, meio, menor;

    printf("Digite 3 números:\n");
    scanf("%i %i %i", &a, &b, &c);

    //Verificação de maior numero
    if (a >= b && a >= c) 
        maior = a;
    else if (b >= a && b >= c)
        maior = b;
    else
        maior = c;

    //Verificação de menor numero
    if (a <= b && a <= c)
        menor = a;
    else if (b <= a && b <= c)
        menor = b;
    else
        menor = c;

    //Verificação de numero do meio
    if (a != maior && a != menor)
        meio = a;
    else if (b != maior && b != menor)
        meio = b;
    else
        meio = c;

    //Saida
    printf("\nMaior: %i\nMeio: %i\nMenor: %i\n", maior, meio, menor);

    return 0;
}