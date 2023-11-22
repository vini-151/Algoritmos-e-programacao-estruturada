#include <stdio.h>

int main(){
    // declarando variavel

    int x = 10;
    int y = 20;
    //declarando ponteiro

    int *pY;
    int *pX;

    pY = &y;
    pX = &x;


    if (pY > pX){
        printf("endereco Y vem primeiro\n");
    }else{
        printf("Endereco x vem  primeiro\n");
    }

    if (*pY > *pX){
        printf("O conteudo de y e maior");
    }else{
        printf("O conteudo de x e maior");
    }
    


}