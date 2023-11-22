#include <stdio.h>
#include <stdlib.h>

int main(){
    char *nome;

    nome  = (char*)malloc(5 * sizeof(char));

    printf("Digite um nome\n");
    scanf("%[^\n]s", nome);

    printf("Nome: %s", nome);

    nome = realloc(nome, 10 * sizeof(char));

    free(nome);

    return 0;
}