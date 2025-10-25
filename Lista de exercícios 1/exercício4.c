#include <stdio.h>

//Variáveis 
float basemaior, basemenor, altura, area;

int main() {
    printf("Calculo da área de um trapézio\n");
    printf("Me diga o tamanho da base menor(cm): ");
    scanf("%f", &basemenor);
    printf("Me diga o tamanho da base maior(cm): ");
    scanf("%f", &basemaior);
    printf("Me fale a altura do trapézio(cm): ");
    scanf("%f", &altura);
    area = (basemaior + basemenor) * altura / 2;
    printf("A área do trapézio é: %.2f(cm²)", area); 
}