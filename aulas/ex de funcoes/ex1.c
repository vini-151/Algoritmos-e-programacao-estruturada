#include <stdio.h>
// declarando uma função e dizendo a ela o que ela deve fazer 
void imprimir(){ //aqui temos uma função "imprimir", por não retornar nenhum parametro a main, ela é uma função void
    printf("Essa e uma funcao.\n"); // aqui e o codigo que a funcao executara quando ela for chamada na main
}
int main (void){
    imprimir(); // aqui a função está sendo chamada e executará o que está dentro da função 
}