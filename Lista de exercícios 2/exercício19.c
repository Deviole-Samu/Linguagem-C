#include <stdio.h>

/** - Versão 1.0
int main() {
    int a, b, c;

    printf("Insira 3 números:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && b > c)
        printf("O número do meio é %d", b);
    else if(a > c && c > b)
        printf("O número do meio é %d", c);
    else if(b > a && a > c)
        printf("O número do meio é %d", a);
    else if(b > c && c > a)
        printf("O número do meio é %d", c);
    else if(c > a && a > b)
        printf("O número do meio é %d", a);
    else
        printf("O número do meio é %d", b);    
}*/ 

int main() {
    int a, b, c, meio;

    printf("Insira 3 números diferentes:\n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a > c && a < b))
        printf("O número do meio é %d", a);
    else if ((b > a && b < c) || (b > c && b < a))
        printf("O número do meio é %d", b);
    else 
        printf("O número do meio é %d", c);
    
    return 0;
}