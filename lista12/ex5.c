#include <stdio.h>

void calcularIdade(int n1){
    int n2 =  2023 - n1;
    printf("Idade em anos: %i\n", n2);
    n2 = n2 * 365;
    printf("Idade em dias: %i\n", n2);
    n2 = (n2 /365) * 12;
    printf("Idade em meses: %i\n", n2);
    

}

int main(){
    int ano;
    printf("Insira ano de nascimento:\n");
    scanf("%i", &ano);
    calcularIdade(ano);

    return 0;

}