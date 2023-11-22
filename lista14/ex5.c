#include <stdio.h>

int subst(int *n1, int *n2) {
    if (*n1 < *n2) {
        int temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
}
int main(){
    int num1, num2;

    printf("Insira o valor para a variavel 1 e variavel 2.\n");
    scanf("%i %i", &num1, &num2);
    printf("Valores antes da troca: %i, %i\n", num1, num2);
    subst(&num1, &num2);
    printf("Valores depois da troca: %i, %i\n", num1, num2);

    return 0;
}