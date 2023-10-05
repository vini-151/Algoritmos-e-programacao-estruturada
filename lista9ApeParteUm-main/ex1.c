#include <stdio.h>

int main (){
    int a[6]= {1,0,5,-2,-5,7};
    int soma;

    soma = a[0] + a[1] + a[5];

    printf("%i\n", soma);

    a[4] = 100;

    for (int i = 0; i < 6; i++){
        printf("%i\n", a[i]);
    }

    return 0;
}