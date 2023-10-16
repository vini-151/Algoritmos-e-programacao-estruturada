#include <stdio.h>
//prototipo --> Declarado antes da main
void imprimir();
//ou
void imprimirDois(){
    printf("Imprimindo a outra funcao\n");
}

int main(){
    // chamando uma função
    imprimir();
    imprimirDois();
}
// implementando a função depois da main
void imprimir(){ // nesse caso, a função não tem retorno e nem parametro. "() "está vazio
    //codigo que a função executará
    printf("Ola, funcao!\n");
}