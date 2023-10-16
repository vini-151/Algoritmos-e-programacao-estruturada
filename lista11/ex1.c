#include <stdio.h>

 int maiorValor(int n1, int n2){
    if (n1 > n2){
        return n1;
    }else{
        return n2;
    }
}

int main(){
    int numero1, numero2, retornoFuncao;
    printf("Insira o valor do numero1\n");
    scanf("%i", &numero1);
    printf("Insira o valor do numero2\n");
    scanf("%i", &numero2);

    retornoFuncao = maiorValor(numero1, numero2);

    printf("%i", retornoFuncao);

}