#include <stdio.h>

int main(){
    // declarando variavel
    int y = 20;
    int x = 10;

    //declarando ponteiro

    int *pY;
    int *pX;

    pY = &y;
    pX = &x;


    if (pY > pX){
        printf("endereco Y vem primeiro");
    }else{
        printf("Endereco x vem  primeiro");
    }

    if (*pY > *pX){
        printf("O conteudo de y e maior");
    }else{
        printf("O conteudo de x e maior");
    }
    


}