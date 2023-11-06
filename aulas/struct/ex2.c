//=====STRUCTS===== (Ou registros)
//outra forma de declarar registros

#include <stdio.h>
#include <string.h>
//declarando registro
typedef struct{
    char rua[20];
    char cep[10];
    int numero;
}Endereco; // tem que ser maiusculo 
int main(){
    //declarando uma variavel tipo registro
    Endereco end;

    printf("Digite a rua:\n");
    fgets(end.rua, sizeof(end.rua), stdin); // a função "sizeof" pega o numero que a função end.rua possui como tamanho
    fflush(stdin);
    printf("Digite o cep\n");
    fgets(end.cep, sizeof(end.cep), stdin);
    fflush(stdin);
    printf("Digite o numero: \n");
    scanf("%i", &end.numero);

    printf("\nRua: %s", end.rua);
    printf("Cep: %s", end.cep);
    printf("Numero: %d", end.numero);

}