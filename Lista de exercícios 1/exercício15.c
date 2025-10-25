//Biblioteca
#include <stdio.h>

#include <stdlib.h>


//Constante
const float Importancia = 780000;

//Variáveis
float ponto1, ponto2, ponto3, importancia1, importancia2, importancia3, ponto_total;

int main() {
    //Entrada
    printf("-Divisão do premio do concurso-\n\n");
    printf("Me diga a pontuação dos 3 primeiros colocados.\n\n");
    printf("Primeiro: ");
    scanf("%f", &ponto1);
    printf("Segundo: ");
    scanf("%f", &ponto2);
    printf("Terceiro: ");
    scanf("%f", &ponto3);

    //Processamento
    ponto_total = ponto1 + ponto2 + ponto3;

    importancia1 = (ponto1 / ponto_total) * Importancia;
    importancia2 = (ponto2 / ponto_total) * Importancia;
    importancia3 = (ponto3 / ponto_total) * Importancia;

    //Saída
    printf("\n\nA premiação dos participantes foi de:\n\n");
    printf("Primeiro: R$ %.2f", importancia1);
    printf("\nSegundo: R$ %.2f", importancia2);
    printf("\nTerceiro: R$ %.2f\n\n\n", importancia3);
}