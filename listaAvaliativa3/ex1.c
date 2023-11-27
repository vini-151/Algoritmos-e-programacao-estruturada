#include <stdio.h>
#include <stdlib.h>

typedef struct Produto{
    int codigo[6];
    char descricao[50];
    int quantidade;
    double valor;
    struct Produto *prox;
}Produto;

Produto* iniciarLista(){ // inicializando uma lista vazia
    return NULL;
}

Produto* criarProduto(){
    Produto *novoProduto = (Produto*)malloc(sizeof(Produto));
    if (novoProduto == NULL){
        printf("Memoria indisponivel.\n");
        exit(EXIT_FAILURE);
    }
    novoProduto->prox = NULL;
    return novoProduto;    
}

Produto* cadastro(Produto *lista){ //adiciona novo produto ao estoque, solicitando as informaçoes de codigo, descricao, quantidade e valor
    Produto *novoProduto = criarProduto();  
    //Inserindo dados
    system("cls");
    printf("Insira o codigo do produto.\n");
    scanf("%i", &novoProduto->codigo);
    printf("Insira sua descricao.\n");
    fflush(stdin);
    fgets(novoProduto->descricao, sizeof(novoProduto->descricao), stdin);
    fflush(stdin);
    printf("Insira a quantidade;\n");
    scanf("%i", &novoProduto->quantidade);
    printf("Insira o valor do produto.\n");
    scanf("%lf", &novoProduto->valor);
    printf("Cadastro do produto de codigo: %i realizado com sucesso!\n", *novoProduto->codigo);
    if (lista == NULL){
        return novoProduto;
    }else{
        Produto *atual = lista;
        while (atual->prox != NULL){
            atual = atual->prox;
        }
        atual->prox = novoProduto;
        return lista;
    }
}

void relatorio(Produto *lista){ //percorre  a lista e imprime um relatorio com as informações inseridas
    system("cls");
    Produto *atual = lista;
    if(lista == NULL){
        printf("Lista nula.\n");
        return;
    }else{
        while (atual != NULL){
            printf("Codigo do produto: %i\n", *atual->codigo);
            printf("Descricao: %s", atual->descricao);
            printf("Quantidade: %i\n", atual->quantidade);
            printf("Valor: %.2lf\n\n", atual->valor);
            atual = atual->prox;
        }
    }  
}

Produto* buscarProduto(Produto *lista, int codigo){ //Funcao que permite o usuario pesquisar o produto pelo seu codigo 
    system("cls");
    Produto *atual = lista;
    while (atual != NULL){
        if (codigo == *atual->codigo){
            printf("Produto encontrado!\n");
            printf("Codigo: %i\n", *atual->codigo);
            printf("Descricao: %s", atual->descricao);
            printf("Quantidade: %i\n", atual->quantidade);
            printf("Valor: %.2lf\n", atual->valor);
            return;
        }
        atual = atual->prox;
    }printf("Produto nao encontrado.\n");
}

Produto* excluir(Produto *lista, int codigo){
    system("cls");   
    Produto *atual = lista; 
    Produto *anterior = NULL;

    while (atual != NULL && *atual->codigo != codigo){
        anterior = atual;
        atual = atual->prox;
    }
    if (atual != NULL){
        if (anterior != NULL){
            anterior->prox = atual->prox;
        }else{
            lista = atual->prox;
        }
        free(atual);
        printf("Excluido com sucesso!\n");
    }else{
        printf("Nao foi possivel excluir produto");
    }
    return lista;
}

void liberarLista(Produto *lista){
    Produto *atual = lista;
    Produto *prox;
    while (atual != NULL){
        prox = atual->prox;
        free(atual);
        atual = prox;
    }
    
}

int main(){
    int opcao, codigo;
    Produto *lista = iniciarLista(); //inicializa lista
    Produto *encontrado;


    do{
        system("cls");
        printf("Digite 1 para cadastrar.\n");
        printf("Digite 2 para mostrar.\n");
        printf("Digite 3 para buscar.\n");
        printf("Digite 4 para excluir.\n");
        printf("Digite 0 para finalizar.\n");  
        scanf("%i", &opcao);    
        switch (opcao){
            case 1:
                lista = cadastro(lista);
            break;
          case 2:
               relatorio(lista);
            break;
           case 3:
                printf("Insira o codigo do produto que deseja buscar.\n");
                scanf("%i", &codigo);
                printf("%i", codigo);
                encontrado = buscarProduto(lista, codigo);
            break;
            case 4:
                printf("Insira o codigo do produto que deseja excluir.\n");
                scanf("%i", &codigo);
                printf("%i", codigo); 
                lista = excluir(lista, codigo);  
            break;                
        }  
        if (opcao != 0){ // caso o usuario já tenha pedido para o sistema encerrar, essa mensagem abaixo não será impressa novamente
            printf("Digite 1 para continuar. Digite 0 para finalizar\n");
            scanf("%i", &opcao);
        }   
    } while (opcao != 0);
    
    liberarLista(lista);

    return 0;

}