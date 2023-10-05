#include <stdio.h>

int main (){
    float p1, p2, p3, notaFinal;

    printf("Insira a nota da prova 1:\n");
    scanf("%f", &p1);
    printf("Insira a nota da prova: 2 \n ");
    scanf("%f", &p2);
    printf("Insira a nota da prova 3: \n ");
    scanf("%f", &p3);

    notaFinal = (p1 + p2 + (p3 * 2 )) / 4;

    if(notaFinal >= 7){
        printf("Parabens! Voce foi aprovado");
    }else{
        printf("Voce esta reprovado");
    }
}




