#include <stdio.h>
#include <stdlib.h>

int main(){
    //alocação dinamica funcao  malloc, realoc, e free

    int *numero;
    int *numero2;


    numero = (int*)malloc(sizeof(int)); // a funcao esta alocando um espaço de memoria de 8 bytes;
    numero2 = (int*)malloc(sizeof(int));
    printf("Endereco alocado: %d\n", &numero);
    printf("Endereco alocado: %d\n", &numero2);
    if (numero == NULL){
        printf("Nao ha memoria disponivel.\n");
        return 1;
    }   

    *numero = 10;
    *numero2 = 20;
    (*numero)++;
    printf("Numero armazenado: %i\n", *numero);
    *numero = *numero2 + *numero;
    printf("soma dos numeros: %i", *numero);

    free(numero);
    free(numero2);

    return 0;

}