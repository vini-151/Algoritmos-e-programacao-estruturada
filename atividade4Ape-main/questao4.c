#include <stdio.h>

int main(){
    float a, b, c;
    float maior=0;
    float intermed=0;
    float menor=0;

    printf("insira o primeiro valor:\n");
    scanf("%f",&a);
    printf("Insira o segundo valor:\n");
    scanf("%f", &b);
    printf("Insira o terceiro valor:\n");
    scanf("%f",&c);

    if (a>b && a>c)
    {
        maior = a;
    }else if (b>c && b>a)
    {
        maior = b;
    }else{
        maior = c;
    }
    
    if (b>a && a>c || c>a && a>b)
    {
        intermed = a;
    }else if (a>b && b>c || c>b && b>a)
    {
        intermed = b;
    }else{
        intermed = c;
    }

   if (a<b && a<c)
    {
        menor = a;
    }else if (b<c && b<a)
    {
        menor = b;
    }else{
        menor = c;
    }

    printf("O maior numero e:%.2f.", maior);
    printf("O numero intermediario e:%.2f. ", intermed);
    printf("O menor numero e:%.2f.", menor);
}

