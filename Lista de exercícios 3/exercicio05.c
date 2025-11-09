#include <stdio.h>
#include <float.h>
#include <ctype.h>

int main() {
    //Constantes
    const int MEDIA = 5;

    //Variaveis de entrada
    int total_aluno;
    float nota;
    char sexo;

    //Variáveis de processamento
    float
        soma_nota_aluno = 0,
        media_nota_aluno = 0,
        maior_nota = 0,
        menor_nota = FLT_MAX,
        soma_nota_masculino = 0,
        media_nota_masculino = 0,
        soma_nota_feminino = 0,
        media_nota_feminino = 0;
    
    int
        cont_feminino = 0,
        cont_masculino = 0,
        cont_aprovado = 0,
        cont_reprovado = 0;

    //Entrada
    printf("--- Avaliação de Alunos ---\n\n");
    printf("Insira a quantidade de alunos a serem avaliados: ");
    scanf("%i", &total_aluno);

    for(int i = 1; i <= total_aluno; i++) {
        printf("\n---\nAluno %i.", i);
        printf("\nNota do aluno: ");
        scanf("%f", &nota);

        printf("\nSexo do aluno.\n[F] - Feminino\n[M] - Masculino\n--> ");
        scanf(" %c", &sexo);
        sexo = toupper(sexo);

        while(sexo != 'M' && sexo != 'F') {
            printf("\nInsira um sexo BIOLOGICO válido!\n");
            printf("\nSexo do aluno.\n[F] - Feminino\n[M] - Masculino\n--> ");
            scanf(" %c", &sexo);
            sexo = toupper(sexo);
        }

        if(sexo == 'M') {
            cont_masculino++;
            soma_nota_masculino += nota;
        }
        else {
            cont_feminino++;
            soma_nota_feminino += nota;
        }

        soma_nota_aluno += nota;

        if(nota > maior_nota)
            maior_nota = nota;

        if(nota < menor_nota)
            menor_nota = nota;

        if(nota >= MEDIA)
            cont_aprovado++;
        else
            cont_reprovado++;        
    }

    media_nota_aluno = soma_nota_aluno / total_aluno;

    if(cont_masculino > 0)
        media_nota_masculino = soma_nota_masculino / cont_masculino;

    if(cont_feminino > 0)
        media_nota_feminino = soma_nota_feminino / cont_feminino;
    
    //Saída
    printf("\n--- Resultados ---\n\n");
    printf("\nMédia da nota dos alunos: %.2f", media_nota_aluno);
    printf("\nMaior nota: %.2f", maior_nota);
    printf("\nMenor nota: %.2f", menor_nota);
    printf("\nMedia sexo Masculino: %.2f", media_nota_masculino);
    printf("\nMedia sexo Feminino: %.2f", media_nota_feminino);
    printf("\n%% de alunos aprovados: %.2f%%", cont_aprovado * 1.0 / total_aluno * 100);
    printf("\n%% de alunos reprovados: %.2f%%", cont_reprovado * 1.0 / total_aluno * 100);
    printf("\n\n");

    return 0;
}