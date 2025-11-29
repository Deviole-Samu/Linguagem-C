#include <stdio.h>

int main() {
    //Constantes
    const float NOTA_CORTE = 6;
    const int TAM = 3;

    //Vetores
    float notas[TAM];

    //Variáveis de Processamento e Saída
    float media_ponderada;

    //Entrada
    printf("--- Cáculo de Média Ponderada de Aluno ---\n\n");

    for(int i = 0; i < TAM; i++) {
        printf("Insira nota %i: ", i + 1);
        scanf("%f", &notas[i]);

        while(notas[i] < 0 || notas[i] > 10) {
            printf("\n--> Nota inválida!");
            printf("\nInsira uma nota entre 0 e 10: ");
            scanf("%f", &notas[i]);
        }
    }

    //Processamento
    media_ponderada = (notas[0] * 2 + notas[1] * 3 + notas[2] * 4) / 9;

    if(media_ponderada < NOTA_CORTE)
        printf("\nO aluno obteve uma média ponderada de %.2f e foi Reprovado!", media_ponderada);
        
    else
        printf("\nO aluno obteve uma média ponderada de %.2f e foi Aprovado!", media_ponderada);
    
    printf("\n");
    return 0;
}