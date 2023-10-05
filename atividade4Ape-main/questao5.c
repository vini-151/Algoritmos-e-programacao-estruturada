#include <stdio.h>

int main (){
    float num;

    printf("Insira um numero\n");
    scanf("%f", &num);
    if (num == 5 || num == 200 || num == 400)
    {
        printf("O numero esta dentro dos escopos (5 ou 200 ou 400)");
    }else if (num >= 500 && num<1000)
    {
        printf("O numero esta dentro dos escopos (Intervalo entre 500 e 1000)");
    }else
    {
        printf("O numero esta fora dos escopos");
    }

}
