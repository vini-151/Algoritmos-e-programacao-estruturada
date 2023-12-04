#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct Registro{
    char proprietario[50];
    char combustivel[10];
    char modelo[20];
    char cor[20];
    char placa[8];
    int numChassi, ano;
    struct Registro *prox;
}Registro;

Registro* criarRegistro(){ //aloca memoria
    Registro *novoRegistro = (Registro*)malloc(sizeof(Registro));
    if (novoRegistro == NULL){
        printf("Memoria indisponivel.\n");
        exit(EXIT_FAILURE);
    }
    novoRegistro->prox = NULL;
    return novoRegistro;  
}

Registro* cadastrar(Registro *lista){
    Registro *novoRegistro = criarRegistro();
    int validar = 1;
    system("cls");
    printf("Digite nome do proprietario.\n");
    fflush(stdin);
    fgets(novoRegistro->proprietario, sizeof(novoRegistro->proprietario), stdin);
    fflush(stdin);
    do{
        printf("Insira o tipo de combustivel. (alcool, diesel ou gasolina).\n");
        fflush(stdin);
        fgets(novoRegistro->combustivel, sizeof(novoRegistro->combustivel), stdin);
        fflush(stdin);
        novoRegistro->combustivel[strcspn(novoRegistro->combustivel, "\n")] = '\0';
        if (strcmp(novoRegistro->combustivel, "alcool") != 0 && strcmp(novoRegistro->combustivel, "diesel") != 0 && strcmp(novoRegistro->combustivel, "gasolina") != 0){
            printf("Combustivel nao aceito.\n");
        }else{
            validar = 0;
        }
    } while (validar == 1);
    printf("Insira o modelo.\n");
    fflush(stdin);
    fgets(novoRegistro->modelo, sizeof(novoRegistro->modelo), stdin);
    fflush(stdin);
    printf("Insira a cor.\n");
    fflush(stdin);
    fgets(novoRegistro->cor, sizeof(novoRegistro->cor), stdin);
    fflush(stdin);
    printf("Insira o numero do chassi.\n");
    scanf("%i", &novoRegistro->numChassi);
    printf("Insira o ano.\n");
    scanf("%i", &novoRegistro->ano);
    //verificar placa
    validar = 0;
    do{
        validar = 0;
        printf("Insira a placa.\n");
        fflush(stdin);
        fgets(novoRegistro->placa, sizeof(novoRegistro->placa), stdin);
        fflush(stdin);
        if (strlen(novoRegistro->placa) != 7){
            printf("Placa incompativel.\n");
            validar = 1;
        }else{
            for (int i = 0; i < 3; i++){
                if (!isalpha(novoRegistro->placa[i])){
                    validar = 1;
                }
            }
            for (int i = 3; i < 7; i++){
                if (!isdigit(novoRegistro->placa[i])){
                    validar = 1;
                }                
            }
        }
    }while(validar == 1);
    if (lista == NULL){
        return novoRegistro;
    }else{
        Registro *atual = lista;
        while (atual->prox != NULL){
            atual = atual->prox;
        }
        atual->prox = novoRegistro;
        return lista;        
    }
} 

void carrosDiesel(Registro *lista){ // carros do ano de 2010 ou posterior movidos a diesel
    Registro *atual = lista;
    system("cls");
    if (lista == NULL){
        printf("Lista vazia.\n");
        return;
    }else{
        printf("Mostrando Proprietarios de carros do ano de 2010 ou posterior movidos a diesel:\n");
        while (atual != NULL){
            if (atual->ano >= 2010 && strcmp(atual->combustivel, "diesel") == 0){
                printf("Proprietario: %s", atual->proprietario);
            }
            atual = atual->prox;
        }
    }
    printf("\n");
}

void placaComJ(Registro *lista){ //Uma função que liste todas as placas que comecem com a letra J e terminem com 0, 2, 4 ou 7 e seus respectivos proprietários.
    Registro *atual = lista;
    system("cls");
    if (lista == NULL){
        printf("Lista vazia.\n");
        return;
    }else{
        printf("Mostrando placas que comecam com \"j\" e terminem com 0, 2, 4 ou 7 e seus proprietarios.\n");
        while (atual != NULL){
            if (atual->placa[0] == 'J' && atual->placa[6] == '0' || atual->placa[6] == '2' || atual->placa[6] == '4' || atual->placa[6] == '7'){
                printf("Placa: %s\n",atual->placa);
                printf("Proprietario: %s", atual->proprietario);
            }
            atual = atual->prox;
        }
    }   
}   

void placaComVogal(Registro *lista){//Uma função que liste o modelo e a cor dos veículos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par. 
    Registro *atual = lista;
    system("cls");
    printf("Mostrando modelos e suas cores cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numericos fornece um numero par.\n");
    if(lista == NULL){
        printf("Lista vazia.\n");
        return;
    }else{
        while (atual != NULL){
            //verificando a soma
            int verifica = 0;
            int soma = atual->placa[3] + atual->placa[4] + atual->placa[5] + atual->placa[6];
            int modulo = soma % 2;
            if (modulo == 0){
                verifica = 0;
            }else{
                verifica = 1;
            }
            if (verifica == 0 && atual->placa[1] == 'a' ||atual->placa[1] == 'e' ||atual->placa[1] == 'i' ||atual->placa[1] == 'o' ||atual->placa[1] == 'u'){
                printf("modelo: %s", atual->modelo);
                printf("cor: %s\n", atual->cor);
            }
            atual = atual->prox;
        }
    }
}

void troca(Registro *lista, int numChassi){ //Uma função que permita a troca de proprietário com o fornecimento do número do chassi apenas para carros com placas que não possuam nenhum dígito igual a zero.
    Registro *atual = lista; 
    system("cls");
    while (atual != NULL){
        if (atual->placa[3] == '0'||atual->placa[4] == '0'||atual->placa[5] == '0'||atual->placa[6] == '0'){
            printf("Nao foi possivel realizar a troca de proprietarios, placa contem um digito\"0\".\n");
        }else{
            while (atual != NULL){
                if (atual->numChassi == numChassi){
                    printf("Chassi de numero: %i localizado\n", numChassi);
                    printf("Digite o nome do novo proprietario:\n");
                    fflush(stdin);
                    fgets(atual->proprietario, sizeof(atual->proprietario), stdin);
                    fflush(stdin);
                    printf("Proprietario alterado com sucesso!\nNovo proprietario: %s", atual->proprietario);
                    return;
                }
                atual = atual->prox;
            }
            printf("Numero de Chassi nao localizado.\n");    
        }
        
    }
    
}

void liberarLista(Registro *lista){
    Registro *atual = lista;
    Registro *prox;

    while (atual != NULL){
        prox = atual->prox;
        free(atual);
        atual = prox;
    }
}

int main(){
    
    int opcao, buscaChassi;
    Registro *lista = NULL;

    do{
        printf("Digite a opcao desejada:\n");
        printf("1 - Cadastro de Veiculo.\n");
        printf("2 - Proprietarios de carros do ano de 2010 ou posterior movidos a diesel.\n");
        printf("3 - Placas que comecam com \"j\" e terminem com 0, 2, 4 ou 7.\n");
        printf("4 - Modelos e suas cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numericos fornece um numero par.\n");
        printf("5 - Trocar proprietario via Numero do Chassi (apenas para carros com placas que não possuam nenhum digito igual a zero.).\n");
        printf("0 - Finalizar.\n");
        scanf("%i", &opcao);

        switch (opcao){
        case 1:
            lista = cadastrar(lista);
            break;
        case 2:
            carrosDiesel(lista);
            break; 
        case 3:
            placaComJ(lista);
            break;
        case 4:
            placaComVogal(lista);
            break;
        case 5:
            printf("Insira o numero do chassi:\n");
            scanf("%i", &buscaChassi);
            troca(lista, buscaChassi);
        default:
            break;
        }

    } while (opcao != 0);
    
    liberarLista(lista);

    return 0;

}