#include <stdio.h>

//Constantes
const int
    FAIXA1 = 4,
    FAIXA2 = 6,
    FAIXA3 = 8,
    FAIXA4 = 9;

//Variaveis entrada
float nota1, nota2, nota3;

//Variaveis processamento
float media = 0;

int main() {
    printf("---Calculo da media aritmética de três notas---\n\n");
    printf("Me insira o valor de sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Valor da sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Terceira nota: ");
    scanf("%f", &nota3);

    //Processamento
    media = (nota1 + nota2 + nota3) / 3;

    //Saida
    if(media > 9) {
        printf("Parabéns! Desempenho Excelente!");
    }

    else if(media > 8) {
        printf("Que legal! Desempenho Ótimo!");
    }

    else if(media >= 6) {
        printf("Boa! Desempenho esperado.");
    }

    else if(media >= 4) {
        printf("Sinto muito! Você terá de fazer exame.");
    }

    else {
        printf("Reprovado!");
    }

    return 0;
}