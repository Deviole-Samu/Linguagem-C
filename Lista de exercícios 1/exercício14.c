#include <stdio.h>

#include <stdlib.h>

//Constante
const float Valor_hora = 10, Inss = 0.08;

//Variávies
float horas, desconto, liquido, bruto;b

//Início
int main() {
    printf("Calcule o seu salário mensal aqui!\n\n");

    //Entrada
    printf("Quantas horas mensais você trabalha? ");
    scanf("%f", &horas);

    //Processamento
    bruto = horas * Valor_hora;

    desconto = bruto * Inss;

    liquido = bruto - desconto;

    //Saída
    printf("\nVamos aos cálculos!\n\n");
    printf("Seu salário bruto mensal é de: %.2f$\n", bruto);
    printf("O valor descontado do seu salário foi de: %.2f$\n", desconto);
    printf("O salário líquido resultou em: %.2f$", liquido);
}