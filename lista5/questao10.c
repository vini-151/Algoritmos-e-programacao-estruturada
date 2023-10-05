#include <stdio.h>
#include <math.h>

int main (){
    double a, b, c, x, x1, x2, delta;

    printf("Montando uma equacao de segundo grau ax2 + bx + c = 0 \n");
    printf("Insira o valor de A\n");
    scanf("%lf", &a);
    printf("Insira o valor de B\n");
    scanf("%lf", &b);
    printf("Insira o valor de C\n");
    scanf("%lf", &c);

    if(a == 0){
        printf("Nao e equacao de segundo grau");
    }else{
        delta = (b * b) - 4 * a * c;
    
        printf("Valor de delta e: %.0lf", delta);

        if(delta == 0 ){
            x = (-b) / (2 * a);
            printf("\nO valor de x e: %.2lf", x);
        }else if (delta >= 0){
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("\nAs duas raizes possiveis sao, %.2lf e %.2lf", x1, x2);
        }else{
            printf("\nNao existe raiz");
        }
    }  
}
