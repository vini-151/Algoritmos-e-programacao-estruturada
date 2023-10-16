/* 
    Construir um algoritmo que receba 3 notas de 5 alunos, calcular a media de CADA aluno.
    Ao final, apresentar a media de cada aluno e seu respectivo nome. utilizando matrizes.
*/

#include <stdio.h>

int main(){
    char nomes[5][50]; //5 alunos, cada um podendo receber 50 caracteres
    double matriz[5][3]; //5 alunos (linhas) 3 notas (colunas)
    double soma, media;

    for (int i = 0; i < 5; i++){
        printf("Insira o nome do aluno:\n");
        fgets(nomes[i], 50, stdin);
        fflush(stdin);
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite a nota %i para alnuno(a) %s", j, nomes[i]);
            scanf("%lf", &matriz[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 5; i++){
        soma = 0;
        for (int j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
        media = soma / 3;
        printf("A media do aluno %s e de: %.2lf\n", nomes[i], media);
    }

    return 0;

}