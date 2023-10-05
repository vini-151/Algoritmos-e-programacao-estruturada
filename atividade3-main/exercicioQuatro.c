#include <stdio.h>

int main (){
    float seuPeso;
    float pesoPadrao = 60;
    printf("Insira seu peso\n");
    scanf("%f", &seuPeso);
    if(seuPeso > pesoPadrao){
        printf("Voce pesa mais que 60kg\n");
    }else if (seuPeso == pesoPadrao){
        printf("voce pesa 60kg\n");
    }else{
        printf("Voce pesa menos que 60kg");
    }
}
