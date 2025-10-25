//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
const float
    ALTURA_MINIMA = 1.75,
    PESO_MINIMO = 50.0,
    PESO_MAXIMO = 80.0;

const int 
    IDADE_MINIMA = 18;

//Variáveis
float altura, peso;

int idade;

int main() {
    setlocale(0, "Portuguese");

    printf("---Seleção de modelos---\n");
    printf("Iremos avaliar se você está apto a entrar na nossa empresa\n\n\n");
    printf("Insira a sua idade: ");
    scanf("%i", &idade);

    fflush(stdin);
    printf("Insira a sua altura em metros: ");
    scanf("%f", &altura);

    fflush(stdin);
    printf("Insira o seu peso em Kg: ");
    scanf("%f", &peso);

   if ((idade > IDADE_MINIMA) && 
    (altura > ALTURA_MINIMA) && 
    (peso >= PESO_MINIMO && peso <= PESO_MAXIMO))
    {
        printf("\nParabéns, você é gostoso e foi selecionado!\n\n");
    }
    
    else
    
    {
        printf("\nSinto muito, você é feio!\n\n");
    }

}