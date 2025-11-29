#include <stdio.h>
#include <ctype.h>

int main() {
    //Constantes
    const int CARGOS = 1000;

    //Array
    int idades[CARGOS];
    char sexos[CARGOS];

    //Variáveis processamento
    int
        soma_idade = 0,
        soma_idade_feminino = 0,
        soma_idade_masculino = 0,
        cont_masculino = 0,
        cont_feminino = 0,
        maior_idade = 0,
        qtd_maior = 0,
        menor_idade = 9999,
        qtd_menor = 0,
        maior_idade_feminino = 0,
        maior_idade_masculino = 0,
        menor_idade_feminino = 9999,
        menor_idade_masculino = 9999;
    
    float
        media_idade_masculino = 0,
        media_idade_feminino = 0,
        media_idade = 0;

    //Início
    printf("Cadastro de Candidatos a Vagas de Emprego\n");
    for(int i = 0; i < CARGOS; i++) {
        printf("\n---- Candidato %d ----\n", i + 1);
        printf("\nInforme a idade: ");
        scanf("%i", &idades[i]);

        while(idades[i] < 16 || idades[i] > 75) {
            printf("\nIdade inválida!\nRedigite a idade: ");
            scanf("%i", &idades[i]);
        }
        
        printf("\n--Informe o sexo\nM - Maculino\nF - Feminino\n--> ");
        scanf(" %c", &sexos[i]);
        sexos[i] = toupper(sexos[i]);

        while(sexos[i] != 'M' && sexos[i] != 'F') {
            printf("\nSexo inválido!\nRedigite o sexo\nM - Maculino\nF - Feminino\n--> ");
            scanf(" %c", &sexos[i]);
            sexos[i] = toupper(sexos[i]);
        }
        //Processamento
        soma_idade += idades[i];

        if (idades[i] > maior_idade) {
            maior_idade = idades[i];
            qtd_maior = 1;
        }

        else if (idades[i] == maior_idade) {
            qtd_maior++;
        }

        if (idades[i] < menor_idade) {
            menor_idade = idades[i];
            qtd_menor = 1;
        }

        else if (idades[i] == menor_idade) {
            qtd_menor++;
        }

        if (sexos[i] == 'F') {
            cont_feminino++;
            soma_idade_feminino += idades[i];

            if (idades[i] > maior_idade_feminino) {
                maior_idade_feminino = idades[i];
            }

            if (idades[i] < menor_idade_feminino) {
                menor_idade_feminino = idades[i];
            }
        }

        else {
            cont_masculino++;
            soma_idade_masculino += idades[i];

            if (idades[i] > maior_idade_masculino) {
                maior_idade_masculino = idades[i];
            }

            if (idades[i] < menor_idade_masculino) {
                menor_idade_masculino = idades[i];
            }
        }
    }
    media_idade = soma_idade * 1.0 / CARGOS;

    if (cont_feminino > 0) {
        media_idade_feminino = soma_idade_feminino * 1.0 / cont_feminino;
        menor_idade_feminino = 0;
    }
    
    if (cont_masculino > 0) {
        media_idade_masculino = soma_idade_masculino * 1.0 / cont_masculino;
        menor_idade_masculino = 0;
    }

    //Saída
    printf("\n---- Resultados ----\n");
    printf("\nMédia de idade dos candidatos: %.f anos", media_idade);
    printf("\nMédia de idade dos candidatos do sexo feminino: %.f anos", media_idade_feminino);
    printf("\nMédia de idade dos candidatos do sexo masculino: %.f anos", media_idade_masculino);
    printf("\nMaior idade entre os candidatos: %d anos (Quantidade: %d)", maior_idade, qtd_maior);
    printf("\nMenor idade entre os candidatos: %d anos (Quantidade: %d)", menor_idade, qtd_menor);
    printf("\nMaior idade entre as candidatas do sexo feminino: %d anos", maior_idade_feminino);
    printf("\nMaior idade entre os candidatos do sexo masculino: %d anos", maior_idade_masculino);
    printf("\nMenor idade entre as candidatas do sexo feminino: %d anos", menor_idade_feminino);
    printf("\nMenor idade entre os candidatos do sexo masculino: %d anos", menor_idade_masculino);

    printf("\n");
    return 0;
}