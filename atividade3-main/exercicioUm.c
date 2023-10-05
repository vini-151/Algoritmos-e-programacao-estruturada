#include <stdio.h>

int main(){

int idade;

printf("Insira sua idade\n");
scanf("%i", &idade);

if (idade >= 18)
{
    printf("Voce e maior de idade!");
}else
{
    printf("Voce e menor de idade!");
}
}
