#include <stdio.h>

int troca(int n1, int n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;  
    printf("Valores trocados: %i, %i", n1, n2);
}

int main(){
    int num1, num2;

    int *p1, *p2;

    p1 = &num1;
    p2 = &num2;

    printf("Insira o valor para a variavel 1 e variavel 2.\n");
    scanf("%i %i", p1, p2);
    printf("%i, %i", *p1, *p2);
    troca(*p1, *p2);

    return 0;

}