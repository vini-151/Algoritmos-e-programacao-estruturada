#include <stdio.h>

int main (){
    float chico = 1.50;
    float ze = 1.10;
    int tempoAno = 0;

    while (ze < chico){
        chico += 0.02;
        ze += 0.03;
        tempoAno++;
    }

    printf("Levou %i anos para ze passar de chico", tempoAno);
    
}
