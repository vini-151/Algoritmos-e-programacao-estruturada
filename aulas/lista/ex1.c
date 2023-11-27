#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct Pessoa{
    char nome[50];
    int idade;
    int id;
    struct Pessoa *prox; //ponteiro que armazena o endereço da proxima pessoa
}Pessoa;


Pessoa* criarListaVazia(){
    return NULL;
}

//função para alocar memoria
Pessoa* criarPessoa(){
    Pessoa *novaPessoa = (Pessoa*)malloc(sizeof(Pessoa)); // alocando memoria
    if (novaPessoa == NULL){
        printf("Memoria Indisponivel.\n");
        exit(EXIT_FAILURE);
    }
    novaPessoa->prox = NULL;
    return novaPessoa;
}
//inserir dados
Pessoa* cadastrar(Pessoa *lista){
    srand(time(NULL));
    Pessoa *novaPessoa = criarPessoa();
    novaPessoa->id = rand() % 100;
    printf("Digite o nome:\n");
    fflush(stdin);
    fgets(novaPessoa->nome, sizeof(novaPessoa->nome), stdin);
    fflush(stdin);
    printf("Insira a idade:\n");
    scanf("%i", &novaPessoa->idade);
    printf("cadastro realizado! ID: %i\n", novaPessoa->id);    
//_fpurge(stdin)
    if(lista == NULL){
        return novaPessoa;
    }else{
        Pessoa *atual = lista;
        while (atual->prox != NULL){
            atual = atual->prox;
            //sai da repetição quando ele achar o  elemento que aponta para NULL 
        }   
        atual->prox = novaPessoa;
        return lista; // atualizar a lista
    }
}

void mostrarLista(Pessoa *lista){
    system("cls"); // limpa tela
    Pessoa *atual = lista;
    if (lista == NULL){
        printf("Lista nula.\n");
        return;
    }else{
        while (atual != NULL){
            printf("Nome: %s", atual->nome);
            printf("Idade: %i\n", atual->idade);
            printf("ID: %i\n", atual->id);
            printf("\n");
            atual = atual->prox;
        }
    }
}

Pessoa* buscarPessoa(Pessoa *lista, int idBusca){
    Pessoa *atual = lista; // fazendo o "atual" apontar pro primeiro elemento 
    while (atual != NULL){
        if (idBusca == atual->id){
            printf("Nome: %s", atual->nome);
            printf("Idade: %i\n", atual->idade);
            return;
        }
        atual = atual->prox;
    }printf("Usuario nao encontrado.\n");    
}

void alterar(Pessoa *pessoa){
    printf("\nDigite o novo nome.\n");
    fflush(stdin);
    fgets(pessoa->nome, sizeof(pessoa->nome), stdin);
    printf("Insira a nova idade.\n");
    scanf("%i", &pessoa->idade);
}

Pessoa* excluir(Pessoa *lista, int idBusca){
    Pessoa *atual = lista;
    Pessoa *anterior = NULL;

    while(atual != NULL && atual->id != idBusca){
        atual = atual->prox;
        anterior = atual;
    }
    if (atual == NULL){
        if (anterior !=NULL){
            anterior->prox = atual->prox;
        }else{
            lista = atual->prox;
        }
        free(atual);
        printf("Removido com sucesso!\n");   
    }else{
        printf("Pessoa nao encontrada.\n");
    }
}

void liberarLista(Pessoa *lista){
    Pessoa *atual = lista;
    Pessoa *prox;

    while (atual != NULL){
        prox = atual->prox;
        free(atual);
        atual = prox;
    }
}

int main(){
    int opcao;
    int idBusca;
    Pessoa *encontrada; // armazena a pessoa encontrada para excluir ou alterar
    Pessoa *lista = criarListaVazia(); //sempre vai ser o primeiro da lista


    do{
        printf("Digite 1 para cadastrar.\n");
        printf("Digite 2 para mostrar.\n");
        printf("Digite 3 para buscar.\n");
        printf("Digite 4 para alterar.\n");
        printf("Digite 5 para excluir.\n");
        printf("Digite 0 para finalizar.\n");
        scanf("%i", &opcao);
        switch (opcao){
        case 1:
            lista = cadastrar(lista);
            break;
        case 2:
            mostrarLista(lista);
            break;
        case 3:
            printf("Digite o ID para a busca.\n");
            scanf("%i", &idBusca);
            encontrada = buscarPessoa(lista, idBusca);
            break;
        case 4:
            printf("\nDigite o ID para a busca.\n");
            scanf("%d", &idBusca);
            encontrada = buscarPessoa(lista, idBusca);
            if (encontrada !=NULL){
                alterar(encontrada);
            }
            break;
        case 5:
            printf("\nDigite o ID para a busca.\n");
            scanf("%d", &idBusca);
            if (encontrada !=NULL){
                lista = excluir(lista, idBusca);
            }
            break;
        }
    } while (opcao != 0);
    
    liberarLista(lista);
    
    return 0;

}