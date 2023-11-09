#include <stdio.h>
#include <string.h>
#define MAX 3 //maximo de 3 pessoas na lista

typedef struct{
    char nome [20];
    char matricula [20];
    int idade;
}Aluno;

void cadastrar(Aluno p[], int indice){
    printf("Insira o nome:\n");
    fflush(stdin);
    fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
    fflush(stdin);
    printf("Insira a matricula:\n");
    fgets(p[indice].matricula, sizeof(p[indice].matricula), stdin);
    fflush(stdin);
    printf("Insira a idade.\n");
    scanf("%i", &p[indice].idade);
}

void imprimir(Aluno p[], int indice){
    for (int i = 0; i < indice; i++){
        printf("Exibindo cadastros\n");
        printf("Nome: %s\n", p[i].nome);
        printf("Matricula: %s\n", p[i].matricula);
        printf("Idade: %i\n", p[i].idade);
        printf("\n");
    }
    
}

void buscar(Aluno p[], int totalCadastrados){
    char matricula [20];
    int encontrado = 0;
    printf("Insira a matricula do aluno que deseja buscar.\n");
    fflush(stdin);
    fgets(matricula, sizeof(matricula), stdin);
    fflush(stdin);
    for (int i = 0; i < totalCadastrados; i++){
        if (strcmp(matricula, p[i].matricula) == 0){
            printf("Aluno de matricula: %s.\nNome: %s.\n Idade: %i", matricula, p[i].nome, p[i].idade);
            encontrado = 1;
        }
    }
    if (encontrado != 1){
        printf("Matricula nao encontrada no registro.\n");
    }
    
}

int main(){
    Aluno p[MAX];
    int totalCadastrados = 0;
    int opcao;
    do{
        printf("Digite 1 para cadastrar.\n Digite 2 para imprimir.\nDigite 3 para buscar.\n Digite 0 Para sair\n");
        scanf("%i", &opcao);
        switch (opcao){
        case 1:
            if (totalCadastrados < MAX){
                cadastrar(p, totalCadastrados);
                totalCadastrados++;
                printf("\nCadastro realizado com sucesso!\n");
            }else{
                printf("nao e possivel cadastrar");
            }
            break;
        case 2:
            imprimir(p, totalCadastrados);
            break;
        case 3:
            buscar(p, totalCadastrados);
            break;
        }
    }while (opcao != 0);
        
    
    return 0;
}


