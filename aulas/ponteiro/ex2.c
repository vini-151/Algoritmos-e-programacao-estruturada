#include <stdio.h>

int main(){
    //declarando vairável
    int numero;
    numero = 10;

    int *ponteiro; // variavel que guarda o endereço de memoria, o compilador sabe que isso é um ponteiro pelo (*)
    float *x = NULL; //nesse caso, o ponteiro aponta para nenhum lugar na memoria
    double *y;
    struct num *p;

    //inicialização do ponteiro

    ponteiro = &numero;

    printf("Conteudo do ponteiro X: %d", x);


    return 0;

}