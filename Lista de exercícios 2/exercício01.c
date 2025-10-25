#include <stdio.h>

const int CORTE = 6;

//Variáveis
float nota1, nota2, media = 0;

int main() {
    //Entrada
    printf("-Cálculo de Média-\n\n\n");
    printf("Insira o valor da primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira o valor da segunda nota: ");
    scanf("%f", &nota2);

    //Processamento
    media = (nota2 + nota1) / 2;

    //saida
    if (media >= CORTE) {
        printf("Você foi aprovado!!!");
    }

    else {
        printf("Sinto muito, mas não foi dessa vez ;(\n\n");
    }
}