#include <stdio.h>

int main(){
    //declaração de variavel
    int x = 10;
    //declaração do ponteiro
    int *p;
    int *p2;

    p = &x; //p guarda o endereçode memoria de x
    p2 = p;

    (*p)++; // incrementando a variavel atraves do ponteiro

    printf("%d\n", x);
    printf("conteudo de x atraves do p2: %d", *p2);


}