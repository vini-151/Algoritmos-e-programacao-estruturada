#include <stdio.h>

int main(){
    int num1, num2, soma, sub, mult;
    float div;

    printf("insira numero1:\n");
    scanf("%d", &num1);
    printf("Insira numero2:\n");
    scanf("%d", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;

    printf("A soma e: %d\n", soma);
    printf("A subtracao e: %d\n", sub);
    printf("A multiplicacao e: %d\n", mult);
    printf("A divisao e: %.2f\n", div);


}
