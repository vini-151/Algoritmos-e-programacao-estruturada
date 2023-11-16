    //ponteiro é uma variável que armazena endereço de memoria

    /*
    exemplificando a memória
        _________
 1000   |  100   |   ----> Int NUM
        |________|
 1001   |        |
        |________|
 1002   |  1000  |   ----> Int*Ponteiro
        |________|

            ponteiro = &num
    */
#include <stdio.h>

int main(){
    //declarando vairável
    int numero;
    numero = 10;

    int *ponteiro; // variavel que guarda o endereço de memoria, o compilador sabe que isso é um ponteiro pelo (*)

    printf("Endereco de memoria da variavel \"Numero\": %d\n", &numero); // & para mostrar o endereço de memoria

    //inicialização do ponteiro

    ponteiro = &numero;

    printf("Conteudo da variavel \"ponteiro\": %d\n", ponteiro);

    printf("Endereco de memoria da variavel \"ponteiro\": %d\n", &ponteiro);

    //acessando o conteudo da variavel atraves do ponteiro

    printf("Conteudo da variavel \"numero\"atraves do ponteiro : %d\n", *ponteiro);

    // manipulando a variavel atraves do ponteiro 

    *ponteiro = 33; // alteração do conteudo da variavel que o ponteiro faz referencia

    printf("Conteudo da variavel \"numero\": %d\n", numero);
    printf("Conteudo da variavel \"numero\"atraves do ponteiro : %d\n", *ponteiro);
    return 0;

}