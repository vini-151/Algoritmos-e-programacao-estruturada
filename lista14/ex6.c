#include <stdio.h>

int dobro(int *n1, int *n2) {
        *n1 = (*n1) * 2;
        *n2 = (*n2) * 2;
}
int main(){
    int num1, num2;

    printf("Insira o valor para a variavel 1 e variavel 2.\n");
    scanf("%i %i", &num1, &num2);
    printf("Valores antes de dobrar: %i, %i\n", num1, num2);
    dobro(&num1, &num2);

    int soma = num1 + num2;

    printf("A soma do dobro dos numeros e de: %i", soma);

    return 0;
}