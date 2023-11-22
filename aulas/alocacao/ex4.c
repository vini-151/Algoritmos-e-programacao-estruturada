#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[30];
    int idade;
    float media;
}Estudante;

Estudante* cadastrar(int totalEstudantes){
    Estudante *estudantes = (Estudante*)malloc(totalEstudantes * sizeof(Estudante));

    if(estudantes == NULL){
        return NULL;  
    }
    
    for (int i = 0; i < totalEstudantes; i++){
        printf("\nInsira o nome\n");
        fflush(stdin);
        scanf("%[^\n]", &estudantes[i].nome);
        fflush(stdin);
        printf("Digite a idade.\n");
        fflush(stdin);
        scanf("%i", &estudantes[i].idade);
        fflush(stdin);
        printf("Digite a media.\n");
        fflush(stdin);
        scanf("%f", &estudantes[i].media);
        fflush(stdin);
    }
    
    return estudantes;

}

void mostrar(Estudante *estudantes, int totalEstudantes){
    for (int i = 0; i < totalEstudantes; i++){
        printf("Nome: %s\n", estudantes[i].nome);
        printf("Idade: %i\n", estudantes[i].idade);
        printf("media: %.2f\n\n", estudantes[i].media);
    }
    
}



int main(){

    Estudante *estudantes;
    int totalEstudantes;

    printf("\nQuantos estudantes voce deseja cadastrar?\n");
    scanf("%i", &totalEstudantes);

    estudantes = cadastrar(totalEstudantes);

    mostrar(estudantes, totalEstudantes);

    return 0;
}