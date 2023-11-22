#include <stdio.h>

int main(){
    int num2;
    int num1;

    int *p1;
    int *p2;

    p1 = &num1;
    p2 = &num2;

    printf("Insira o valor para avariavel 1\n");
    scanf("%i", &num1);
    printf("Insira a variavel 2\n");
    scanf("%i", &num2);

    if(p1 > p2){
        printf("Endereco da variavel um maior. Valor armazenado: %i", *p1);
    }else{
        printf("Endereco da variavel dois maior. Valor armazenado: %i", *p2);
    }

    return 0;

}