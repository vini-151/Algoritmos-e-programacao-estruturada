#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3 // tamanho da lista 

typedef struct{
    char nome [20];
    int idade;
    int id;
    int status; // 1= ativo  0 = desativado
}Pessoa;

void cadastrar(Pessoa p[], int indice){
        printf("Insira o nome.\n");
        fflush(stdin);
        fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
        fflush(stdin);
        printf("Insira a idade.\n");
        scanf("%i", &p[indice].idade);
        p[indice].id = rand() % 11 + 1;
        p[indice].status = 1; // está ativo 
        printf("Cadastro realizado com sucesso! Id de pesquisa: %i\n", p[indice].id);
}

void imprimir(Pessoa p[], int tamanhoLista){
    for (int i = 0; i < tamanhoLista; i++){
        printf("Nome: %s", p[i].nome);
        printf("Idade: %i\n", p[i].idade);
        printf("ID: %i\n", p[i].id);
        if (p[i].status == 1){
            printf("Status: Ativo.\n");
        }else{
            printf("Status: Inativo.\n");
        }
        printf("\n");
    }   
}

void buscar(Pessoa p[], int tamanhoLista, int id){
    if (tamanhoLista == 0){
        printf("Lista vazia");
        return;
    }else{
        for (int i = 0; i < tamanhoLista; i++){
            if (p[i].id == id){
                printf("Registro encontrado.\n");
                printf("Nome %s", p[i].nome);
                printf("Idade: %i\n\n", p[i].idade);
                if (p[i].status == 1){
                    printf("Status: Ativo.\n");
                }else{
                    printf("Status: Inativo.\n");
                }
                return;
            }  
        }
    }
}

void alterar(Pessoa p[], int tamanhoLista, int id){
    if (tamanhoLista == 0){
        printf("Lista vazia");
        return;
    }else{
        for (int i = 0; i < tamanhoLista; i++){
            int opcao;
            if (p[i].id == id){
                printf("Registro encontrado.\n");
                printf("Nome %s", p[i].nome);
                printf("Idade: %i\n\n", p[i].idade);
                printf("\nDigite 1 para alterar o nome.\n Digite 2 para alterar a idade.\nDigite 3 para alterar o status.\n Digite 4 para alterar todos. \n Digite 0 para cancelar.\n");
                scanf("%i", &opcao);
                switch (opcao){
                case 1:
                    printf("Digite o novo nome.\n");
                    fflush(stdin);
                    fgets(p[i].nome, sizeof(p[i].nome), stdin);
                    fflush(stdin);
                    printf("Nome alterado para %s", p[i].nome);
                    break;
                case 2:
                    printf("Digite a nova idade.\n");
                    scanf("%d", p[i].idade);
                    printf("Idade alterada para: %i", p[i].idade);
                    break;
                case 3:
                    printf("Alterar status. 1 - Ativo. 0 - Inativo\n");
                    scanf("%d", p[i].status);
                case 4:
                    printf("Digite o novo nome.\n");
                    fflush(stdin);
                    fgets(p[i].nome, sizeof(p[i].nome), stdin);
                    fflush(stdin);
                    printf("Nome alterado para %s", p[i].nome);
                    printf("Digite a nova idade.\n");
                    scanf("%d", p[i].idade);
                    printf("Idade alterada para: %i", p[i].idade);
                    break;
                case 0:
                    return;
                    break;
                }
            }  
        }
    }
}

void excluir(Pessoa p[], int tamanhoLista, int id){

    if (tamanhoLista == 0){
        printf("Lista vazia");
        return;
    }else{
        for (int i = 0; i < tamanhoLista; i++){
            if (p[i].id == id){ // registro encontrado
                for (int j = i; j < tamanhoLista-1; i++){
                    p[j] =p[j - 1];
                }  
                printf("Registro deletado com sucesso!\n");
            }
        }
    }
}

int main(){
    Pessoa p[TAM];
    int totalCadastro = 0;
    int opcao = 1;
    int id;
    
    do{
        printf("Digite 1 para cadastrar.\n");
        printf("Digite 2 para mostrar lista completa.\n");
        printf("Digite 3 para buscar.\n");
        printf("Digite 4 para alterar.\n");
        printf("Digite 5 para excluir.\n");
        printf("Digite 0 para sair do sistema.\n");
        scanf("%i", &opcao);
        switch (opcao){
        case 1: // cadastro
            if (totalCadastro < TAM){
                cadastrar(p, totalCadastro);
                totalCadastro++;
            }else{
                printf("Nao e possivel cadastrar mais usuarios.\n");
            }
            break;
        case 2: // imprimir
            if (totalCadastro != 0){
                imprimir(p, totalCadastro);
            }else{
                printf("Nao ha usuarios cadastrados");
            }
            break;
        case 3: // buscar
            printf("Digite o ID para buscar.\n");
            scanf("%i", &id);
            buscar(p, totalCadastro, id);
            break;
        case 4: // alterar
            printf("Digite o Id que deseja alterar.\n");
            scanf("%i", &id);
            alterar(p, totalCadastro, id);
            break;
        case 5: // excluir
            printf("Digite o Id que deseja excluir.\n");
            scanf("%i", &id);
            excluir(p, totalCadastro, id);
            totalCadastro--;
            break;
        }
    } while (opcao != 0 );
    


    return 0;

}