#include <stdio.h>
#include <stdlib.h>

//Constantes
const int N_PESSOAS = 1000;

//Variáveis de entrada
int idade;

float altura, peso;

char sexo;

//Variáveis de processamento
int i = 1,
    soma_idades = 0,
    cont_m = 0,
    cont_f = 0;

float
    soma_alturas = 0,
    soma_pesos = 0,
    porcent_m = 0,
    porcent_f = 0;

//Inicio
int main() {
    printf("--Análise de visitantes do shopping--\n\n");

    for(i; i <= N_PESSOAS; i++) {
        printf("Pessoa %i\n\n", i);
        printf("Informe sua idade: ");
        scanf("%i", &idade);

        printf("Altura: ");
        scanf("%f", &altura);

        printf("Peso: ");
        scanf("%f", &peso);

        printf("[M] para masculino ou [F] para feminino\n\n");
        printf("--> ");
        scanf(" %s", &sexo);

        //Processamento
        soma_idades += idade;
        
        soma_alturas += altura;

        soma_pesos += peso;

        if(sexo == 'M' || sexo == 'm') {
            cont_m++;
        }

        else {
            cont_f++;
        }
        
        system("clear");
    }

    //Saida
    printf("A média das idades é de: %.i anos.\n", soma_idades/N_PESSOAS);
    printf("A média das alturas é de: %.2f m\n", soma_alturas/N_PESSOAS);
    printf("A média dos pessos é de: %.f kg\n", soma_pesos/N_PESSOAS);
    printf("A quantidade de possoas do gênero feminino é de %i pessoas\n", cont_f);
    printf("A quantidade de possoas do gênero masculino é de %i pessoas\n", cont_m);
    printf("A %% de pessoas do gênero feminino é de: %.f%%\n", cont_f*1.0/N_PESSOAS*100);
    printf("A %% de pessoas do gênero masculino é de: %.f%%\n", cont_m*1.0/N_PESSOAS*100);
    
}