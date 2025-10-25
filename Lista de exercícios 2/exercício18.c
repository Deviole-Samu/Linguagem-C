#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    printf("Digite 3 numeros diferentes:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        if (b > c)
            printf("Ordem decrescente: %d, %d, %d", a, b, c);
        else 
            printf("Ordem decrescente: %d, %d, %d", a, c, b);
    }
    else if (b > a && b > c) {
        if (a > c)
            printf("Ordem decrescente: %d, %d, %d", b, a, c);
        else
            printf("Ordem decrescente: %d, %d, %d", b, c, a);
    }
    else {
        if (a > b)
            printf("Ordem decrescente: %d, %d, %d", c, a, b);
        else
            printf("Ordem decrescente: %d, %d, %d", c, b, a);
    }
    return 0;
}