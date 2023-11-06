#include <stdio.h>
#include <string.h>

typedef struct{
    char nome [20];
    char matricula [20];
    int idade;
}Aluno;

int main(){
    Aluno a[3];
    for (int i = 0; i < 3; i++){
        fflush(stdin);
        printf("Digite o nome do aluno: \n");
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        fflush(stdin);
        printf("Digite a matricula: \n");
        fgets(a[i].matricula, sizeof(a[i].matricula), stdin);
        fflush(stdin);
        printf("Digite a idade: \n");
        scanf("%i", &a[i].idade );
        fflush(stdin);
        printf("\n");
    }

    for (int i = 0; i < 3; i++){
    printf("Nome: %s", a[i].nome);
    printf("Matricula: %s", a[i].matricula);
    printf("Idade: %i\n\n", a[i].idade);
    }
    
    return 0;

}