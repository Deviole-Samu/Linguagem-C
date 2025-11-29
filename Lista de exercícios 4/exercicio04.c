#include <stdio.h>
#include <float.h> //FLT_MAX
#include <ctype.h> //toupper()

int main() {
    //Constantes
    const int TAM = 5;
    const float MEDIA_APROVACAO = 6.0;
    
    //Vetores
    float notas[TAM];
    char sexos[TAM];

    //Variáveis
    float
        soma_nota = 0,
        media = 0,
        maior_nota = 0,
        menor_nota = FLT_MAX,
        soma_feminino = 0,
        soma_masculino = 0;
    
    //Contadores
    int 
        qtd_maior_nota = 0,
        qtd_menor_nota = 0,
        cont_aprovados = 0,
        cont_reprovados = 0,
        cont_feminino = 0,
        cont_masculino = 0,
        cont_aprovado_feminino = 0,
        cont_reprovado_feminino = 0,
        cont_aprovado_masculino = 0,
        cont_reprovado_masculino = 0,
        qtd_acima_media = 0,
        qtd_na_media = 0,
        qtd_abaixo_media = 0;

    //Entrada
    printf("--- Dados sobre os Alunos ---\n");
    
    for(int i = 0; i < TAM; i++) {

        printf("\n---\nAluno %i.\n", i + 1);

        /*
        do {
        printf("\nDigite a nota: ");
        scanf("%f", &notas[i]);
        } while(notas[i] < 0 || notas[i] > 10);
        */

        printf("\nDigite a nota: ");
        scanf("%f", &notas[i]);

        while(notas[i] < 0 || notas[i] > 10) {
            printf("\n-- Nota inválida!");
            printf("\nRedigite uma nota entre 0 a 10: ");
            scanf("%f", &notas[i]);
        }

        printf("\nDigite o Sexo.\n[F] - Feminino\n[M] - Masculino\n--> ");
        scanf(" %c", &sexos[i]);
        sexos[i] = toupper(sexos[i]);

        while(sexos[i] != 'F' && sexos[i] != 'M') {
            printf("\n-- Valor de Sexo Inválido!");
            printf("\nRedigite o Sexo.\n[F] - Feminino\n[M] - Masculino\n--> ");
            scanf(" %c", &sexos[i]);
            sexos[i] = toupper(sexos[i]);
        }

        soma_nota += notas[i];

        if(notas[i] > maior_nota) {
            maior_nota = notas[i];
            qtd_maior_nota = 1;
        }

        else if(notas[i] == maior_nota)
            qtd_maior_nota++;

        if(notas[i] < menor_nota) {
            menor_nota = notas[i];
            qtd_menor_nota = 1;
        }

        else if(notas[i] == menor_nota)
            qtd_menor_nota++;
        
        if(sexos[i] == 'F') {
            soma_feminino += notas[i];
            cont_feminino++;

            if(notas[i] >= MEDIA_APROVACAO)
                cont_aprovado_feminino++;

            else
                cont_reprovado_feminino++;
        } else {
            soma_masculino += notas[i];
            cont_masculino++;

            if(notas[i] >= MEDIA_APROVACAO)
                cont_aprovado_masculino++;

            else
                cont_reprovado_masculino++;
        }

        if(notas[i] >= MEDIA_APROVACAO)
            cont_aprovados++;

        else
            cont_reprovados++;


    }

    media = soma_nota / TAM;

    for(int i = 0; i < TAM; i++) {
        if(notas[i] > media)
            qtd_acima_media++;
        else if(notas[i] == media)
            qtd_na_media++;
        else
            qtd_abaixo_media++;
    }

    printf("\n\n\n=== Estatísticas Gerais ===");

    printf("\n\n\n--Todos alunos");

    printf("\n\nMédia: %.2f", media);

    printf("\n\nMaior nota: %.2f", maior_nota);
    printf("\nMenor nota: %.2f", menor_nota);

    printf("\n%% de Aprovados: %.2f%%", cont_aprovados * 1.0 / TAM * 100);
    printf("\n%% de Reprovados: %.2f%%", cont_reprovados * 1.0 / TAM * 100);

    printf("\n%% Notas Abaixo da Média: %.2f%%", qtd_abaixo_media * 1.0 / TAM * 100);
    printf("\n%% Notas na Média: %.2f%%", qtd_na_media * 1.0 / TAM * 100);
    printf("\n%% Notas Acima da Média: %.2f%%", qtd_acima_media * 1.0 / TAM * 100);

    printf("\n\n--Sexo Feminino");

    if(cont_feminino > 0) {
    printf("\n\nMédia: %.2f", soma_feminino / cont_feminino);
    printf("\n%% Alunos: %.2f%%", cont_feminino * 1.0 / TAM * 100);
    printf("\n%% Aprovados: %.2f%%", cont_aprovado_feminino * 1.0 / cont_feminino * 100);
    printf("\n%% Reprovados: %.2f%%", cont_reprovado_feminino * 1.0 / cont_feminino * 100);
    } else
        printf("\n\nNenhuma Aluna Cadastrada!");
    
    printf("\n\n--Sexo Masculino");
    
    if(cont_masculino > 0) {
    printf("\n\nMédia: %.2f", soma_masculino / cont_masculino);
    printf("\n%% Alunos: %.2f%%", cont_masculino * 1.0 / TAM * 100);
    printf("\n%% Aprovados: %.2f%%", cont_aprovado_masculino * 1.0 / cont_masculino * 100);
    printf("\n%% Reprovados: %.2f%%", cont_reprovado_masculino * 1.0 / cont_masculino * 100);
    } else
        printf("\n\nNenhum Aluno Cadastrado!");

    printf("\n");
    return 0;
}