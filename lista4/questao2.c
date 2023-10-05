#include <stdio.h>

int main(){
    float num1, num2, num3, num4;
    float maior = 0;
    float menor = 0;

    printf("Insira o valor 1: \n");
    scanf("%f", &num1);
    printf("Insira o valor 2:\n");
    scanf("%f", &num2);
    printf("Insira o valor 3:\n");
    scanf("%f", &num3);
    printf("insira o valor 4:\n");
    scanf("%f", &num4);

    if(num1 > num2 && num1> num3 && num1 > num4){
      maior = num1;
    }else if(num2> num3 && num2>num4){
      maior = num2;
    }else if(num3>num4){
      num3 = maior;
    }else{
      maior = num4;
    }

     if(num1 < num2 && num1 < num3 && num1 < num4){
      menor = num1;
    }else if(num2< num3 && num2<num4){
      menor = num2;
    }else if(num3<num4){
        menor = num3;
    }else{
      menor = num4;
    }

     printf("\nO maior numero e: %.2f", maior);
    printf("\nO menor numero e: %.2f", menor);

      
}



