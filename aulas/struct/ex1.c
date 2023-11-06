//=====STRUCTS===== (Ou registros)

#include <stdio.h>
#include <string.h>
//declarando registro
    struct pessoa{
        char nome[10];
        int idade;   
        float salario;
    };
int main(){
    //declarando uma variavel tipo registro
    struct pessoa p;

    // atribuindo valores ao registro 
    p.idade = 10;
    strcpy(p.nome, "Maria"); // usando a funcao strcpy da biblioteca string.h para a variavel conseguir receber o nome "maria"
    p.salario = 1000.00;

    //exibindo dados   
    printf("Nome: %s ", p.nome);
    printf("\nIdade: %i", p.idade);
    printf("\nSalario: %.2f", p.salario);
}