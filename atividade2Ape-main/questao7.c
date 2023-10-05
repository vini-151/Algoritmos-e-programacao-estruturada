#include <stdio.h>

int main (){
    int anos, meses, dias, idadeDias, anoPdia, mesesPdia;
    printf("Calculando idade em dias, digite por etapas sua idade em anos, meses e dias \n Qual sua idade em anos?\n");
    scanf("%d", &anos);
    printf("Agora os meses\n");
    scanf("%d", &meses);
    printf("Agora os dias\n");
    scanf("%d", &dias);

    anoPdia = anos * 365;
    mesesPdia = meses * 30;
    idadeDias = dias + mesesPdia + anoPdia;

    printf("Sua idade e de aproximadamente %d dias", idadeDias);

}
