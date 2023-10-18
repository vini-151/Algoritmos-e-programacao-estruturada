#include <stdio.h>

// oq são os "parametros"?
//parametros são numeros x dentro dos "()" na função declarada
//ex

int soma(n1, n2){ // aqui temos uma função "soma" que recebe um inteiro "int" e fará uma soma com ele mesmo, imprimindo o valor na main 
    n2 = n1 * 2;
    printf("O resultado e de : %d", n2);

}

int main(void){
    int numero, resultado;
    printf("Insira um numero inteiro.\n");
    scanf("%i", &numero);
    soma(numero);// note que aqui usei nomews diferentes que usei nos parametros lá em cima.
                            // Isso porque o C vai considerar qual posição estou referindo, e não o seu nome
}