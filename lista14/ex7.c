#include <stdio.h>

int soma(int *a, int b){
    *a = (*a) + b;
}
int main(){
    int a, b;

    printf("Insira o valor para a variavel 1 e variavel 2.\n");
    scanf("%i %i", &a, &b);
    soma(&a,b);
    printf("Valor de A: %i\nValor de B: %i", a,b);

    return 0;
}